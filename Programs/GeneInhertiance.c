#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Author: Thomas Seife
Date: 5-26-2023
Description: This program simulates the genetic inheritance of blood types for a family tree structure.
*/

// Define a person struct, where each person has two parents and two alleles.
typedef struct person
{
    struct person *parents[2];
    char alleles[2];
} person;

// Define constants for the number of generations and the indentation length for printing.
const int GENERATIONS = 3;
const int INDENT_LENGTH = 4;

// Function declarations.
person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();

int main(void)
{
    // Seed the random number generator with the current time.
    srand(time(0));

    // Create a new family tree with three generations.
    person *p = create_family(GENERATIONS);

    // Print the family tree with the blood types.
    print_family(p, 0);

    // Free the allocated memory.
    free_family(p);

    return 0;
}

// This function creates a new individual with `generations` of ancestors.
person *create_family(int generations)
{
    // Allocate memory for a new person struct.
    person *newperson = malloc(sizeof(person));

    // If there are still generations left to create.
    if (generations > 1)
    {
        // Recursively create two new parents for the current person.
        newperson->parents[0] = create_family(generations - 1);
        newperson->parents[1] = create_family(generations - 1);

        // Assign the current person's alleles based on a random allele from each of their parents.
        newperson->alleles[0] = newperson->parents[0] ->alleles[rand()%2];
        newperson->alleles[1] = newperson->parents[1] ->alleles[rand()%2];
    }
    // If there are no generations left to create.
    else
    {
        // Set parent pointers to NULL as they don't exist.
        newperson->parents[0] = NULL;
        newperson->parents[1] = NULL;

        // Randomly assign alleles for the person.
        newperson->alleles[0] = random_allele();
        newperson->alleles[1] = random_allele();
    }

    // Return the newly created person struct.
    return newperson;
}

// This function frees the memory allocated for `p` and all ancestors of `p`.
void free_family(person *p)
{
    // If the person is NULL, we have reached the end and return.
    if(p == NULL)
    {
        return;
    }

    // Recursively free the memory for the parents.
    free_family(p->parents[0]);
    free_family(p->parents[1]);

    // Free the memory for the current person.
    free(p);
}

// This function prints each family member and their alleles.
void print_family(person *p, int generation)
{
    // If the person is NULL, we have reached the end and return.
    if (p == NULL)
    {
        return;
    }

    // Print indentation for the current generation.
    for (int i = 0; i < generation * INDENT_LENGTH; i++)
    {
        printf(" ");
    }

    // Print the person's generation and blood type, with additional labeling for readability.
    if (generation == 0)
    {
        printf("Child (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }
    else if (generation == 1)
    {
        printf("Parent (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }
    else
    {
        for (int i = 0; i < generation - 2; i++)
        {
            printf("Great-");
        }
        printf("Grandparent (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }

    // Recursively print the parents of the current person.
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}

// This function randomly chooses a blood type allele.
char random_allele()
{
    // Generate a random number in the range 0-2.
    int r = rand() % 3;

    // Depending on the random number, return 'A', 'B' or 'O'.
    return r == 0 ? 'A' : r == 1 ? 'B' : 'O';
}
