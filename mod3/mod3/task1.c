/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Body Mass Index
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:28:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    double myWeight;
    double myHeight;
    double myBMI;
    // 1) Capture weight in kg
    printf("Enter your weight in Kg\n");
    scanf("%lf", &myWeight);
    printf("%lf\n", myWeight);
    
    // 2) Capture the height in meters
    printf("Enter your height in meters\n");
    scanf("%lf", &myHeight);
    printf("%lf\n", myHeight);
    // 3) Calculate your BMI = weight/height^2
    myBMI = (myWeight / (pow(myHeight, 2)));
    // 4) Display BMI
    printf("Your BMI is: %lf\n", myBMI);
    return 0;
}
// Function Definitions


