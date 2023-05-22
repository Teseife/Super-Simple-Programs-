#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

/**
 *Author: Thomas Seife
 *Date: 5/22/2023
 *Description: Calculates the score for a given word based on the point values of its letters.
 * Non-alphabetic characters are ignored.
 *
 * @param word The word for which to calculate the score.
 * @return The total score of the word.
 */
int compute_score(const char* word);

int main(void)
{
    // Buffer to hold player's input
    char word1[MAX_WORD_LENGTH];
    char word2[MAX_WORD_LENGTH];

    // Get input words from both players
    printf("Player 1: ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0'; // Remove newline character

    printf("Player 2: ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0'; // Remove newline character

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Compare scores and determine the winner
    if (score1 > score2)
    {
        printf("Player 1 wins\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(const char* word)
{
    int score = 0;

    // Calculate score for each letter in the word
    for (int i = 0; i < strlen(word); i++)
    {
        if (isalpha(word[i])) // Ignore non-alphabetic characters
        {
            if (islower(word[i]))
            {
                score += POINTS[word[i] - 'a']; // Add score based on lowercase letter
            }
            else if (isupper(word[i]))
            {
                score += POINTS[word[i] - 'A']; // Add score based on uppercase letter
            }
        }
    }

    return score;
}
