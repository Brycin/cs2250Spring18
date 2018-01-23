/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:05:07 AM
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
    char name[21]; // allocate 20 chars + NULL char
    printf("Enter your name:\n");
    scanf("%s", name); // do not use & when capturing a string
                      // the string ends with the first SPACEi
    printf("Your name is: %s\n", name);

    return 0;
}
// Function Definitions


