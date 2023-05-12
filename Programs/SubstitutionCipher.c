#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Author: Thomas Seife
Date: 5/12/2023
Description: This program is an extension of the 'shiftCypher.c' program, which allows the user to create their 
             own substitution cipher by inputting a 26-letter key. The program then encrypts any user inputted 
             plaintext using the provided key, replacing each letter with its corresponding letter in the key.

             This program is designed to practice string manipulation and command line arguments in C.

*/

/*
 @param int argc: The argument count of the command line.
 @param char* argv[]: The argument vector that holds the arguments inputted from the user.
*/
int main(int argc, char* argv[])
{
    // Declarations
    char* key = malloc(27 * sizeof(char));
    char* lowercase = "abcdefghijklmnopqrstuvwxyz";
    char* uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char plaintext[100] = { };
    int position;

    // Check if arguments are valid
    if (argc != 2 || strlen(argv[1]) != 26) // If the user did not input a key of 26 characters
    {
        printf("Usage: ./substitution key\n");
        return 1;
    } else if(isalpha(argv[1] == false)) // If the user inputted characters that are not letters
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Check for duplicates and non-letter characters in the key
    strcpy(key, argv[1]);
    int size = strlen(key);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (key[i] == key[j]) // If the key contains duplicates
            {
                printf("No duplicates allowed\n");
                return 1;
            }
        }
        if(!isalpha(key[i])) // If the key contains non-letter characters
        {
            printf("All inputs must be letters\n");
            return 1;
        }
    }

    // Get user input
    printf("plaintext: ");
    fgets(plaintext,100,stdin);

    // Encrypt the plaintext using the key
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i])) // If the current character is an uppercase letter
        {
            position = plaintext[i] - 'A'; // Get the position of the letter in the alphabet
            printf("%c", toupper(key[position])); // Replace the letter with its corresponding letter in the key
        }
        else if (islower(plaintext[i])) // If the current character is a lowercase letter
        {
            position = plaintext[i] - 'a'; // Get the position of the letter in the alphabet
            printf("%c", tolower(key[position])); // Replace the letter with its corresponding letter in the key
        }
        else // If the current character is not a letter
        {
            position = -1; // Set position to -1 to indicate that the character should not be replaced
            printf("%c",key[position]);
        }
    }

    printf("\n");
    return 0;
}
