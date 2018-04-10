/*
 * =====================================================================================
 *
 *       Filename:  part1.c
 *
 *    Description:  Parsing Strings
 *
 *        Version:  1.0
 *        Created:  04/08/2018 11:35:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char inputString[128];
    char string1[50];
    char string2[50];
    printf("Enter input string:\n");
    fgets(inputString, sizeof(inputString), stdin);
    sscanf(inputString, "%49s, %49s", string1, string2);
    printf("String 1 [%s] String 2 [%s]\n", string1, string2);

    return 0;
}
// Function Definitions


