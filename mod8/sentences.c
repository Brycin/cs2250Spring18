/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  Capture full strings including spaces
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:34:25 AM
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

// Constants
const int STRSIZE = 128;

// Function Prototypes

// Main Function
int main()
{
    char fullName[STRSIZE];
    printf("Please enter your full name: \n");
    fgets(fullName, STRSIZE, stdin);
    for(int i = 0; i < strlen(fullName); ++i)
    {
        printf("%c", fullName[i]);
    }

    return 0;
}
// Function Definitions


