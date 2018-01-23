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
    char dummy;
    int age;
    printf("Do you like to code?:\n");
    scanf("%c", &input);
    printf("You entered [%c]\n", input);
    
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is [%d]\n", age);
    printf("Do you really like to code?:\n");
    scanf("%c %c", &dummy, &input);
    printf("You entered [%c]\n", input);
    



    return 0;
}
// Function Definitions


