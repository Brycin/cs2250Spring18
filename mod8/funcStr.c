/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:05:05 AM
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
#include "superlib.h"


const int INPUT_STR_SIZE = 50; //Input string size
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE]; //Input string from user
    char userChar; //Input separator from user
    int digits; //Returned value from StrCountDigits function
    //Prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);
    printf("Select separator character: \n");
    scanf("%c", &userChar);

    //Call function to modify user string
    StrSpaceToHyphen(userStr, userChar);

    printf("String with separator: %s\n", userStr);

    digits = StrCountDigits(userStr);
    printf("Your string has %d digits\n", digits);


    return 0;
}




