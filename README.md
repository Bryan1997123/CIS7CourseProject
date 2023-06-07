# CIS7CourseProject
Project Files

Vigenère Cipher Encoder and Decoder

By Bryan Cruz, Demajay Francis and Eric Solorzano 

A C++ program that implements the Vigenère Cipher, an encryption and decryption technique that uses a series of interwoven Caesar ciphers based on a keyword.

## Description

The Vigenère Cipher is a polyalphabetic substitution cipher that provides a more secure alternative to the simple Caesar cipher. It uses a keyword to determine the amount of shift for each letter in the plaintext. This program allows users to encode and decode messages using the Vigenère Cipher.

![Vigenère Cipher Graph](https://github.com/Bryan1997123/CIS7CourseProject/assets/135768503/b606a656-d53f-4271-9747-be76ff4e122c)


## Usage

Upon running the program, you will be prompted to choose between encoding or decoding a message.
Enter the keyword that will be used for encryption or decryption. The keyword should only contain alphabetical characters.
Enter the plaintext message or the ciphertext, depending on your chosen operation.
The program will output the encoded or decoded message based on your selection.

##Examples

Encoding Example:

1.Encrypt
2.Decrypt
3.Quit
1
Type a word or phrase you wish to encrypt. (No Spaces, Numbers or Symbols)
Hello
Type the key needed for encryption and decryption. (No Spaces, Numbers or Symbols)
hi
Encrypted Word: OMSTV

Decoding Example:

1.Encrypt
2.Decrypt
3.Quit
2
Type a word or phrase you wish to decrypt. (No Spaces, Numbers or Symbols)
OMSTV
Type the key needed for encryption and decryption. (No Spaces, Numbers or Symbols)
hi
Decrypted word: HELLO
