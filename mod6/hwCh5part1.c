/*
 * =====================================================================================
 *
 *       Filename:  hwCh5part1.c
 *
 *    Description:  Arrays
 *
 *        Version:  1.0
 *        Created:  02/11/2018 07:06:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
int const NUM_ELEMENTS = 5;

// Constants

// Function Prototypes

// Main Function
int main()
{
    double userInput[NUM_ELEMENTS];
    double average;
    double sum;
    double max;
    int i;

    for(i = 0; i < NUM_ELEMENTS; ++i)
    {
        printf("Enter weight %d:\n", (i + 1));
        scanf("%lf", &userInput[i]);
    }
        printf("You entered: ");

    max = userInput[0];
    sum = 0;

    for(i = 0; i < NUM_ELEMENTS; ++i)
    {
        sum = (userInput[i] + sum);

        if(max < userInput[i])
        {
            max = userInput[i];
        }

        printf("%lf ", userInput[i]);
    }
        average = (sum/NUM_ELEMENTS);
        printf("\n\n");
        printf("Total weight: %lf\n", sum);
        printf("Average weight: %lf\n", average);
        printf("Max weight: %lf\n", max);


    return 0;
}
// Function Definitions


