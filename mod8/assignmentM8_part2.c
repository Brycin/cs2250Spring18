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
#include <ctype.h>
#include <string.h>

// Constants
const int STRING_SIZE = 256;

// Function Prototypes
char PrintMenu(void);
int GetNumOfNonWSCharacters(char userInput[STRING_SIZE]);
int GetNumOfWords(char userInput[STRING_SIZE]);

// Main Function
int main()
{
    char userInput[STRING_SIZE];
    char userChar;

    printf("Enter a sample text:\n");
    fgets(userInput, STRING_SIZE, stdin);
    printf("\nYou entered: %s\n", userInput);
    userChar = PrintMenu();
    while(userChar != 'q')
    {
        if(userChar == 'c')
        {
            printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(userInput));
            printf("\n");
            userChar = PrintMenu();
        }
        else if(userChar == 'w')
        {
            printf("Number of words: %d\n", GetNumOfWords(userInput));
            printf("\n");
            userChar = PrintMenu();
        }
        else
        {
            userChar = PrintMenu();
            printf("\n");
        }
    }
    return 0;
}
// Function Definitions
char PrintMenu(void)
{
    char userChar;
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n\n");
    printf("Choose an option\n");
    scanf(" %c", &userChar);

    return userChar;
}

int GetNumOfNonWSCharacters(char userInput[STRING_SIZE])
{
    int numNonWS = 0;
    for(int i = 0; i < strlen(userInput); ++i)
    {
        if(isspace(userInput[i]))
        {
            continue;
        }
        else
        {
            ++numNonWS;
        }
    }
    return numNonWS;
}

int GetNumOfWords(char userInput[STRING_SIZE])
{
    int numWords = 0;
    for(int i = 0; i < strlen(userInput); ++i)
    {
        if(isspace(userInput[i]) || userInput[i] == '\0')
        {
            ++numWords;
        }
    }
    return numWords;
}
