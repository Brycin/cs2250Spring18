/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn Operations on Characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h> //Library for Char operations
// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9\n");
    scanf("%c", &num);

    if(num == '0')
    {
        printf("You entered 0\n");
    }
    else
    {
        printf("You entered non-zero [%c]\n", num);
    }

    //Test for a letter from alphabet 
    if( isalpha(num) !=0 )
    {
        printf("It is alpha\n");
    }
    else if(isdigit(num) !=0)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("You are [%c]\n", num);
    }

    return 0;
}
// Function Definitions


