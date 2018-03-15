/*
 * =====================================================================================
 *
 *       Filename:  assignmentM8_part2.c
 *
 *    Description:  Text Editing 
 *
 *        Version:  1.0
 *        Created:  03/15/2018 10:09:49 AM
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
const int STRING_SIZE = 256;

// Function Prototypes

// Main Function
int main()
{
    char userInput[STRING_SIZE];
    
    printf("Enter a sample text:\n");
    fgets(userInput, 256, stdin);
    printf("You entered: %s\n", userInput);

    return 0;
}
// Function Definitions


