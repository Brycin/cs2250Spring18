/*
 * =====================================================================================
 *
 *       Filename:  diceGame.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/15/2018 03:31:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int NUM_ROLLS = 100;
const int POSSIBLE = 6;

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i;
    srand((int)(time(0)));
    int randArray[NUM_ROLLS];
    int results[6] = {0, 0, 0, 0, 0, 0};
    char option = 's';


    while(option != 'q')
    {
        printf("DICE ROLLING SIMULATION\n");
        printf("=======================\n");
        printf("s. Simulate dice rolling\n");
        printf("h. Display Histogram\n");
        printf("q. Quit program\n");
        printf("\n");
        printf("Enter your choice:\n");
        scanf(" %c", &option);
        printf("\n");
        if(option == 's')
        {
            for(i = 0; i < POSSIBLE; ++i)
            {
                results[i] = 0;
            }
            for(i =0; i < NUM_ROLLS; ++i)
            {
                randArray[i] = ((rand() %6) + 1);
                if(randArray[i] == 1)
                {
                    ++results[0];
                }
                else if(randArray[i] == 2)
                {
                    ++results[1];
                }
                else if(randArray[i] == 3)
                {
                    ++results[2];
                }
                else if(randArray[i] == 4)
                {
                    ++results[3];
                }
                else if(randArray[i] == 5)
                {
                    ++results[4];
                }
                else if(randArray[i] == 6)
                {
                    ++results[5];
                }
            }
        }

        else if(option == 'h')
        {
            printf("1: ");
            for(i = 0; i < results[0]; ++i)
            {
                printf("*");
            }
            printf(" (%d)\n", results[0]);

            printf("2: ");
            for(i = 0; i < results[1]; ++i)
            {
                printf("*");
            }
            printf(" (%d)\n", results[1]);
            printf("3: ");
            for(i = 0; i < results[2]; ++i)
            {
                printf("*");
            }
            printf(" (%d)\n", results[2]);
            printf("4: ");
            for(i = 0; i < results[3]; ++i)
            {
                printf("*");
            }
            printf(" (%d)\n", results[3]);
            printf("5: ");
            for(i = 0; i < results[4]; ++i)
            {
                printf("*");
            }
            printf(" (%d)\n", results[4]);
            printf("6: ");
            for(i = 0; i < results[5]; ++i)
            {
                printf("*");
            }
            printf(" (%d)\n\n", results[5]);
        }
        else
        {
            continue;
        }
    }
   // for(i=0; i < NUM_ROLLS; ++i)
   // {
   //     if((i %10) == 0)
   //     {
   //         printf("\n");
   //     }
   //     printf("%d ", randArray[i]);
   // }
   // printf("\n");

    return 0;

}
// Function Definitions


