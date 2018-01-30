/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  Basics of Branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:45 AM
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

// Main Function
int main()
{
    int age;
    // Request user input (Age)
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    
    if(age >= 18) //If true go inside curly brackets {} 
                // If false go to next branch (If/else statement)
    {
        printf("You can vote.\n");
    }
    else
    {
        printf("You have %d years till you can vote.\n", 18-age);
    }

    if(age > 20)
    {
        printf("You can also drink.\n");
    }
    else
    {
        printf("But you have %d years till you can drink\n", 21-age);
    }
    
    if(age >= 65)
    {
        printf("And you can also retire.\n");
    }
    else if (21 <= age && age <= 64)
    {
        printf("But you have %d years till you can retire.\n", 65-age);
    }
    else if (age <= 18)
    {
        printf("And %d years till you can retire\n", 65-age);
    }

    if(age == 35)
    {
        printf("This is a special year!\n");
    }
    else if(age < 35)
    {
        printf("You have %d years till your special year.\n", 35 - age);
    }
    else
    {
        printf("You are %d years past your special year.\n", age - 35);
    }
    return 0;
}
// Function Definitions

