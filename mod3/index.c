/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access string members
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:43:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    //Define 2 strings. One for first name one for last name

    char firstName[20];
    char lastName[20];

    printf("Enter first name:\n");
    scanf("%s", firstName);
    printf("Enter last name:\n");
    scanf("%s", lastName);

    //Display your initials

    printf("Hello %s %s\n", firstName, lastName);
    printf("Your initials are: %c%c\n", firstName[0], lastName[0]);
    //To access individual characters use index notation with []
    //Example: <stringName>[characterNumber] 
    //For index notation the Array starts at position 0 not 1
    return 0;
}
// Function Definitions


