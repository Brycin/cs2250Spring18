/*
 * =====================================================================================
 *
 *       Filename:  hwCh3Part1.c
 *
 *    Description:  Home Work M4 Part 1
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:20:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int oilValue = 35;
    int tireValue = 19;
    int washValue = 7;
    char userInput1[15];
    char userInput2[15];


    printf("Enter desired auto service:\n");
    scanf("%s\n", userInput1);
    scanf(" %s\n", userInput2);
    printf("You entered: %s %s\n", userInput1, userInput2);

    if((strcmp(userInput1, "Oil") == 0) && (strcmp(userInput2, "change") == 0))
{
    printf("Cost of oil change: $%d\n", oilValue);
}
    else if((strcmp(userInput1, "Tire") == 0) && (strcmp(userInput2, "rotation") == 0))
{
    printf("Cost of tire rotation: $%d\n", tireValue);
}
    else if((strcmp(userInput1, "Car") == 0) && (strcmp(userInput2, "wash") == 0))
{
    printf("Cost of car wash: $%d\n", washValue);
}
    else
{
    printf("Error: Requested service is not recognized\n");
}


    return 0;
}
// Function Definitions


