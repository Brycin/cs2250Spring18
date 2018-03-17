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
char PrintMenu(char userInput[STRING_SIZE]);
int GetNumOfNonWSCharacters(const char userInput[STRING_SIZE]);
int GetNumOfWords(const char userInput[STRING_SIZE]);
void FixCapitalization(char userInput[STRING_SIZE]);
void ReplaceExclamation(char userInput[STRING_SIZE]);
void ShortenSpace(char userInput[STRING_SIZE]);

// Main Function
int main()
{
    char userInput[STRING_SIZE];
    char userChar;

    printf("Enter a sample text:\n");
    fgets(userInput, STRING_SIZE, stdin);
    printf("\nYou entered: %s\n", userInput);
    userChar = PrintMenu(userInput);
    while(userChar != 'q')
    {
            userChar = PrintMenu(userInput);
    }
    return 0;
}
// Function Definitions
// This function prints a menu and accepts a user option
// It calls another function based on user input
// After operation it returns character to Main and
// as long as char isn't q it will output the menu again
// for another option
char PrintMenu(char userInput[STRING_SIZE])
{
    char userChar;
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n\n");
    printf("Choose an option:\n");
    scanf(" %c", &userChar);
    if(userChar == 'c')
        {
            printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(userInput));
            printf("\n");
        }
        else if(userChar == 'w')
        {
            printf("Number of words: %d\n", GetNumOfWords(userInput));
            printf("\n");
        }
        else if(userChar == 'f')
        {
            FixCapitalization(userInput);
        }
        else if(userChar == 'r')
        {
            ReplaceExclamation(userInput);
        }
        else if(userChar == 's')
        {
            ShortenSpace(userInput);
        }


    return userChar;
}

//Counts the number of characters the user inputs. This includes
//everything except white space chars. It returns integer value
//for the number of characters.
int GetNumOfNonWSCharacters(const char userInput[STRING_SIZE])
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

//Counts the number of words that are input by the user
//and returns the integer value for number of words.
int GetNumOfWords(const char userInput[STRING_SIZE])
{
    int numWords = 0;
    for(int i = 0; i <= strlen(userInput); ++i)
    {
        while(isspace(userInput[i]))
        {
            ++i;
            if(isalpha(userInput[i]))
            {
                ++numWords;
            }
        }
        if(userInput[i] == '\0')
            {
                ++numWords;
            }
    }
    return numWords;
}

//Capitalizes first letter in the string and then checks
//for punctuation marks (. ? !) and capitalizes the next
//letter it comes across
void FixCapitalization(char userInput[STRING_SIZE])
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

    printf("Edited text: %s\n", userInput);
    return;
}

//Finds and ! in the string and replaces it with a .
void ReplaceExclamation(char userInput[STRING_SIZE])
{
    for(int i = 0; i < strlen(userInput); ++i)
    {
        if(userInput[i] == '!')
        {
            userInput[i] = '.';
        }
    }
    printf("Edited text: %s\n", userInput);
    return;
}

//Checks for multiple spaces in a row and removes
//any extra spaces so that there is only one space
//between words.
void ShortenSpace(char userInput[STRING_SIZE])
{
    int i = 0;
    int j = 0;
    char fixSpaces[STRING_SIZE];

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
    strcpy(userInput, fixSpaces);
    printf("Edited text: %s\n", userInput);
    printf("\n");
    return;
}
