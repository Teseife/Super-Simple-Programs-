#include <stdio.h>


/* Author: Thomas Seife
 * Date: 3-16-2023
 * Description: This is simple program that calculates the Population growth of lamas. Uses simple formulas for
 *              finding lamas born and passed that year to appropriately find how many years it would take to reach
 *              a certain population.
 */

// prototypes:
int startvalue(int start);
int endvalue(int end, int start);
int year_amount(int start, int end, int years);

int main()
{
    // Variables and function callers
    int start = 0;
    int end = 0,years = 0;
    start = startvalue(start);
    end = endvalue(end,start);
    years = year_amount(start,end,years);
    // Output:
    printf("Years: %d", (int)years);

    return 0;
}
//**************************************************************************************
int startvalue(int start)
{
    do
    {
        printf("Start Size:");
        scanf("%d",&start);
    } while (start < 9);

    if(start >= 9)
        return start;
    return start;
}
//**************************************************************************************
int endvalue(int end, int start)
{
    do {
        printf("End start:");
        scanf("%d", &end);
    } while (end < start);

    if(end > start){
        return end;
    }// end of if (end > start)
    return end;

}// end of endvalue()

//**************************************************************************************
int year_amount(int start, int end, int years)
{
    int i = 0;
    while(start < end)
    {
        years = start + start/3 - start/4;
        start = years;
        i++;
        if(start >= end)
            return i;
    }// end of while(start < end)
    return i;
}// end of year_amount()
//**************************************************************************************
