/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  Learn about float and int Division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:17 AM
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
    int age = 25;
    int grade = 3;
    double result;
    //We need to cast (transform) one of the int into a float so we get the
    //correct answer. you do this by putting (double) infront of your int in
    //the calculation so it treats it as a double for that single calculation
    //and doesn't change your original int. If you don't change it to a double
    //it won't capture the remainder of your calculation.
    //
    result = (double)age/(double)grade;
    printf("result = %lf\n", result);

    return 0;
}
// Function Definitions


