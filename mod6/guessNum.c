/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guessing game
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
const int LEN = 5; // Number of guesses allowed
const int NUM = 20; // Random numbers between 0-NUM

// Function Prototypes

// Main Function
int main()
{
    //Rules:
    //1. Create a random number between 0-20
    //2. Adk the user to enter a guess between 0-20
    //3. IF the guess is less than the number print guess higher
    //4. ELSE print guess lower
    //5. You get 5 chances
    //6. Display all choices they've entered

    srand((int)(time(0)));
    int input[LEN];
    int randNum = (rand() % NUM);
    int i;
    int opp = 0;
    //printf("Guess a number between 0-%d\n", NUM);
    //For loop way:
    // for(i = 0; (i < LEN) && (input[i] != randNum); ++i)
    // {
    //     scanf("%d", &input[i]);
    //     printf("You entered: %d\n", input[i]);

    //     if(input[i] < randNum)
    //     {
    //        printf("Guess higher\n");
    //     }
    //     else if(input[i] > randNum)
    //     {
    //        printf("Guess lower\n");
    //     }
    //      else
    //     {
    //        printf("You got it!\n");
    //     }
    // }
    // While loop way:
    while(opp < LEN)
    {
        printf("Please enter a number betweeen 0-%d\n", NUM);
        scanf("%d", &input[opp]);
        printf("You entered: %d\n", input[opp]);
        if(input[opp] > NUM || input[opp] < 0)
        {
            continue; //Takes user back to top of loop if invalid input
        }
        if(input[opp] < randNum)
        {
            printf("Guess higher\n");
        }
        else if(input[opp] > randNum)
        {
            printf("Guess lower\n");
        }
        else
        {
            printf("You got it!\n");
            break;
        }
        ++opp;
    }
    for(i = 0; i < LEN; ++i)
    {
        if (input[i] != randNum)
        {
            printf("Sorry you did not guess the number\n");
        }
    }
        printf("Your guesses:");
    for(i = 0; i < opp; ++i)
    {
        printf(" %d", input[i]);
    }
    printf("\nRandom number is: %d\n", randNum);
    return 0;
}
// Function Definitions


