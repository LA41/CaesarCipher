# CaesarCipher
Caesar Cipher is a project made for CS50 course. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet.
In this app user must provide exactly one digit as a command-line argument, that comes after the name of a file. For example, if user types 3, 'A' becomes 'D', 'B' becomes 'E' and so on. Then app asks user for a plaintext and provides with a ciphertext (being case sensitive).

At first the toughest nut to crack was coming up with an idea how to rotate the alphabet, so the cipher remains case sensitive, but with a few approaches (and a bit more bugs in the meantime) I managed to make it work properly.
