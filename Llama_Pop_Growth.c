#include <stdio.h>

/* Author: Thomas Seife
 * Date: 3-16-2023
 * Description: This is a simple program that calculates the population growth of llamas. 
 *              It uses simple formulas for finding the number of llamas born and passed away 
 *              each year to determine how many years it would take to reach a certain population.
 */

// prototypes:
int get_start_population(void);
int get_end_population(int start_population);
int calculate_years_to_reach_population(int start_population, int end_population);

int main()
{
    // Variables and function callers
    int start_population = get_start_population();
    int end_population = get_end_population(start_population);
    int years_to_reach_population = calculate_years_to_reach_population(start_population, end_population);

    // Output:
    printf("It will take %d years to reach a population of %d llamas.\n", years_to_reach_population, end_population);

    return 0;
}

/**
 * Prompts the user to enter the starting population of llamas.
 *
 * @return The starting population of llamas entered by the user.
 */
int get_start_population(void)
{
    int start_population;
    do
    {
        printf("Enter the starting population of llamas (must be at least 9): ");
        scanf("%d", &start_population);
    } while (start_population < 9);
    
    return start_population;
}

/**
 * Prompts the user to enter the ending population of llamas.
 *
 * @param start_population The starting population of llamas.
 *
 * @return The ending population of llamas entered by the user.
 */
int get_end_population(int start_population)
{
    int end_population;
    do
    {
        printf("Enter the ending population of llamas (must be greater than or equal to the starting population of %d): ", start_population);
        scanf("%d", &end_population);
    } while (end_population < start_population);

    return end_population;
}

/**
 * Calculates the number of years it will take to reach the ending population of llamas
 * given the starting population and the rate of population growth.
 *
 * @param start_population The starting population of llamas.
 * @param end_population The ending population of llamas.
 *
 * @return The number of years it will take to reach the ending population of llamas.
 */
int calculate_years_to_reach_population(int start_population, int end_population)
{
    int years_to_reach_population = 0;
    while (start_population < end_population)
    {
        int llamas_born = start_population / 3;
        int llamas_passed = start_population / 4;
        start_population += llamas_born - llamas_passed;
        years_to_reach_population++;
    }
    return years_to_reach_population;
}
