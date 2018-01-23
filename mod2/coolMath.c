/*
 * =====================================================================================
 *
 *       Filename:  coolMath.c
 *
 *    Description:  Using Math Library
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:39:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h> // sqrt(), pow(), fabs()
// Constants

// Function Prototypes

// Main Function
int main()
{
    //calculate the sides of a triangle
    double sideA = 4.0;
    double sideB = 3.0;
    double sideC;

    sideC = sqrt(pow(sideA, 2) + (pow(sideB, 2)));
    printf("sideA %lf, sideB %lf, sideC %lf\n", sideA, sideB, sideC);
    double a = -99.0;
    printf("The absolute value of %lf is %lf\n", a, fabs(a));

    return 0;
}
// Function Definitions


