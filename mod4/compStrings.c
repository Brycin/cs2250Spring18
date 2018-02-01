/*
 * =====================================================================================
 *
 *       Filename:  compareStrings.c
 *
 *    Description:  Comparing Strings Values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h> //Library used to perform operations on Strings

// Constants

// Function Prototypes

// Main Function
int main()
{
    char word1[51];
    char word2[51];
    printf("Enter a word:\n");
    scanf("%s", word1); //Don't use & because it is an address operator and 
                      //A string is an Array not an individual address
    printf("You entered [%s]\n", word1);

    //Compare strings
    if(strcmp(word1, "Hello") == 0)//If strings are identical the comparison 
                                  //Command will return a value of 0
                                  //If not identical it will return different value
    {
        printf("You entered Hello\n");
    }
    else
    {
        printf("You did not enter Hello\n");
    }
    //Copying Strings
    strcpy(word2, word1); // word2 = word1
    printf("[%s] and [%s]\n", word1, word2);

    return 0;
}
// Function Definitions


