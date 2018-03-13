/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  Super function definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:13 AM
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
#include "superlib.h"
// Function Definitions
void StrSpaceToHyphen(char modString[], char separator)
{
    int i = 0; // Loop index
    for (i = 0; i < strlen(modString); ++i)
    {
        if (modString[i] == ' ')
        {
            modString[i] = separator;
        }
    }
    return;
}

//Function counts the number of digits in a string
//Takes one string argument and returns an integer
int StrCountDigits(char modString[])
{
    int digit = 0;
    for (int i = 0; i < strlen(modString); ++i)
    {
        if (isdigit(modString[i]))
        {
        ++digit;
        }
    }

    return digit;
}



