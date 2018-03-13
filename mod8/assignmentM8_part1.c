/*
 * =====================================================================================
 *
 *       Filename:  assignmentM8_part1.c
 *
 *    Description:  Text analyzer and modifier
 *
 *        Version:  1.0
 *        Created:  03/09/2018 11:27:58 AM
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
int GetNumOfCharachters(char userInput[]);
void OutputWithoutWhitespace(char userInput[]);

// Main Function
int main()
{
    char userInput[100];
    int numChars;
    printf("Enter a sentence or phrase: \n");
    fgets(userInput, 100, stdin);
    printf("You entered: %s\n", userInput);
    numChars = GetNumOfCharachters(userInput);
    printf("Number of characters: %d\n", numChars);
    OutputWithoutWhitespace(userInput);


    return 0;
}
// Function Definition
int GetNumOfCharachters(char userInput[])
{
    int numChars = 0;

    for(int i = 0; userInput[i] != '\n'; ++i)
    {
        ++numChars;
    }
    return numChars;
}
void OutputWithoutWhitespace(char userInput[])
{
    printf("String with no whitespace: ");
    for(int i = 0; userInput[i] != '\n'; ++i)
    {
        if(userInput[i] == ' ' || userInput[i] == '\t')
        {
            continue;
        }
        else
        {
            printf("%c", userInput[i]);
        }
    }

    printf("\n");

    return;
}


