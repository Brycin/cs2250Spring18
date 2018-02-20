/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take 2 numbers (floats) from the user
 *                  Define the following funtions:
 *                  1. The Sum: Returns integer sum of the 2 numbers
 *                  2. The Product: Returns the double product of the 2 numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:32:11 AM
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
int Sum(double num1, double num2);
double Prod(double num1, double num2);

// Main Function
int main()
{
    double userNum1;
    double userNum2;
    printf("Enter first number:\n");
    scanf("%lf", &userNum1);
    printf("Enter second number:\n");
    scanf("%lf", &userNum2);
    printf("The integer sum of %lf and %lf is: %d\n", userNum1, userNum2, Sum(userNum1, userNum2));
    printf("The product of %lf and %lf is: %lf\n", userNum1, userNum2, Prod(userNum1, userNum2));

    return 0;
}
// Function Definitions
// Returns Sum of two numbers
int Sum(double num1, double num2)
{
    //You can also use casting (int) instead of creating new int variable
    //Example: return (int) num1 + num2;
    int sum = num1 + num2;
    return sum;
}
//Returns Product of two numbers
double Prod(double num1, double num2)
{
    //Can also just write as: return num1 * num2;
    double prod = num1 * num2;
    return prod;
}

