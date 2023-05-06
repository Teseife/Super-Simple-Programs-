#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
Author: Thomas seife
Date: 5-4 -2023
Description: This is a simple program that takes encrypts plain text by shifting individual letters by a given amount.

**********************************************************************
 * Encrypts a plain text message using the shift cipher.
 * 
 * @param argc The number of command-line arguments provided.
 * @param argv An array of strings containing the command-line arguments.
 *             The second argument (argv[1]) should be the key for the shift cipher.
 * @return     0 if the program executes successfully, or 1 if an error occurs.
 */
int main(int argc, char *argv[])
{
    // Check if the correct number of command-line arguments are provided
    if (argc != 2)
    {
        printf("Usage: ./shiftcipher key\n");
        return 1;
    }

    // Convert the key to an integer value and ensure that it is between 0 and 25
    int shift = atoi(argv[1]) % 26;

    // Get the plain text input from the user
    char plain_text[1000];
    printf("plaintext: ");
    fgets(plain_text, 1000, stdin);

    // Encrypt the plain text using the shift cipher
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plain_text); i < n; i++)
    {
        if (isalpha(plain_text[i]))
        {
            if (isupper(plain_text[i])) // For uppercase letters
            {
                // Apply the shift and wrap around if necessary
                char c = ((plain_text[i] - 'A' + shift) % 26) + 'A';
                printf("%c", c);
            }
            else if (islower(plain_text[i])) // For lowercase letters
            {
                // Apply the shift and wrap around if necessary
                char c = ((plain_text[i] - 'a' + shift) % 26) + 'a';
                printf("%c", c);
            }
        }
        else // For non-alphabetic characters
        {
            printf("%c", plain_text[i]);
        }
    }
    printf("\n");

    return 0;
}
