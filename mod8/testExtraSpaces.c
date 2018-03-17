/*
 * =====================================================================================
 *
 *       Filename:  testExtraSpaces.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/17/2018 10:27:19 AM
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
#include <ctype.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char userInput[256];
    char fixSpaces[256];
    printf("Input string with extra space: \n");
    fgets(userInput, 256, stdin);
    printf("You entered: %s\n", userInput);
    int i = 0;
    int j = 0;
    while(userInput[i] != '\n')
    {
        if(isspace(userInput[i]))
        {
            if(isspace(userInput[i + 1]))
            {
                ++i;
                continue;
            }
            else
            {
                fixSpaces[j] = userInput[i];
                ++i;
                ++j;
                continue;
            }
        }
        fixSpaces[j] = userInput[i];
        ++i;
        ++j;
    }
    printf("edited String: %s\n", fixSpaces);
    strcpy(userInput, fixSpaces);
    printf("%s\n", userInput);
    return 0;
}
// Function Definitions


