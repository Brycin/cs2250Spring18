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
char *FixCapitalization(char userInput[STRING_SIZE]);
char *ReplaceExclamation(char userInput[STRING_SIZE]);
void ShortenSpace(char userInput[STRING_SIZE]);

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
        else if(userChar == 'f')
        {
            printf("Edited text: %s\n", FixCapitalization(userInput));
            printf("\n");
            userChar = PrintMenu();
        }
        else if(userChar == 'r')
        {
            printf("Edited text: %s\n", ReplaceExclamation(userInput));
            printf("\n");
            userChar = PrintMenu();
        }
        else if(userChar == 's')
        {
            ShortenSpace(userInput);
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
        while(isspace(userInput[i]))
        {
            ++i;
            if(isalpha(userInput[i]))
            {
                ++numWords;
            }
            else if(userInput[i] == '\0')
            {
                ++numWords;
            }
        }
    }
    return numWords;
}

char *FixCapitalization(char userInput[STRING_SIZE])
{
    if(isalpha(userInput[0]))
    {
        userInput[0] = toupper(userInput[0]);
    }
    for(int i = 0; i < strlen(userInput); ++i)
    {
        if((userInput[i] == '.') || (userInput[i] =='!') || (userInput[i] == '?'))
        {
            int j = i + 1;
            while(isalpha(userInput[j]) == 0)
            {
                ++j;
            }
            userInput[j] = toupper(userInput[j]);


        }
    }

    return userInput;
}

char *ReplaceExclamation(char userInput[STRING_SIZE])
{
    for(int i = 0; i < strlen(userInput); ++i)
    {
        if(userInput[i] == '!')
        {
            userInput[i] = '.';
        }
    }
    return userInput;
}

void ShortenSpace(char userInput[STRING_SIZE])
{
    printf("Edited text: ");
    for(int i = 0; i < strlen(userInput); ++i)
    {
        if(isspace(userInput[i]))
        {
            if(isspace(userInput[i + 1]))
            {
                continue;
            }
            else
            {
                printf("%c", userInput[i]);
            }
        }
        else
        {
            printf("%c", userInput[i]);
        }
    }
    return;
}
