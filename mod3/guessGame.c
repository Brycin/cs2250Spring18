/*
 * =====================================================================================
 *
 *       Filename:  guessGame.c
 *
 *    Description:  Guess Random Num between 0-9 and win a prize
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:08:07 AM
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

// Function Prototypes

// Main Function
int main()
{

    srand((int)(time(0)));
    int guess;
    int input;
    printf("Please enter a number between 0 and 9\n");
    scanf("%d", &input);
    guess = rand() % 10;
    printf("You entered %d\nMy number is %d\n", input, guess);

    return 0;
}
// Function Definitions


