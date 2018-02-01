/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  Logical Comparisons
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:32:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h> //Library for Boolean Variables

// Constants

// Function Prototypes

// Main Function
int main()
{

    //Ask user to input their grade. 
    //100-90 = A
    //89-80 = B
    //79-70 = C
    //< 70 = E
    
    int grade;
    bool success = true;

    printf("Input your grade:\n");
    scanf("%d", &grade);

    if (grade >= 90) 
    {
        printf("You got an A\n");
    }

    else if ((grade >= 80) && (grade < 90)) 
    {
        printf("You got a B\n");
    }
    
    else if ((grade >= 70) && (grade < 80)) 
    {
        printf("You got a C\n");
    }
    
    else 
    {
        printf("You failed! You got an E\n");
        success = false; //You did not pass the class
    }

    // Test for TRUE or FALSE
    // an int is only false when value of int = 0
   if(success)
    {
        printf("Congrats! You passed!\n"); //Default will test if success is true
    }
   else
    {
        printf("See you next semester.\n"); //If success isn't true then its false
    }
    return 0;
}
// Function Definitions


