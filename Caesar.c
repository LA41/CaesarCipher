#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    // check if amount of input is just right
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // define the key
    string key = argv[1];
    // check if input is a digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // get plaintext from user
    string plain = get_string("plaintext:  ");

    // convert key to integer
    int k = atoi(key);
    printf("ciphertext: ");
    // obtain ciphertext
    for (int i = 0; i < strlen(plain); i++)
    {
        if (isupper(plain[i]))
        {
            printf("%c", (((plain[i] - 65) + k) % 26) + 65);
        }
        else if (islower(plain[i]))
        {
            printf("%c", (((plain[i] - 97) + k) % 26) + 97);
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");

}