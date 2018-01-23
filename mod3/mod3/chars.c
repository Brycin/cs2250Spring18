/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  Practice Characters
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:16 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    
    char input;
    int age;
    printf("Do you like to code?:\n");
    scanf("%c", &input);
    printf("You entered [%c]\n", input);
    
    printf("Do you really like to code?:\n");
    scanf(" %c", &input); //The space before %c will take care of previous
    //ENTER key so that is doesn't store the ENTER key as your next character
    printf("You entered [%c]\n", input);
    
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is [%d]\n", age);



    return 0;
}
// Function Definitions


