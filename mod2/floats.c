/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  Learning about floating points
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:53:16 AM
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
const double GRAVITY = 9.8; // m/s*s
const double LB_TO_KG = 0.453592;

// Function Prototypes

// Main Function
int main()
{
    
    double weight = 36;
    printf("My w is %lf\n", weight);
    printf("Enter your weight\n");
    scanf("%lf", &weight);
    printf("My weight in kg is %lf\n", weight * LB_TO_KG);
    printf("Your real weight is %lf\n", weight * LB_TO_KG * GRAVITY);
    
    return 0;
}
// Function Definitions


