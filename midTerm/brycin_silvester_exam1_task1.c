/*
 * =====================================================================================
 *
 *       Filename:  brycin_silvester_exam1_task1.c
 *
 *    Description:  First Choice
 *
 *        Version:  1.0
 *        Created:  02/27/2018 08:42:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <strings.h>

// Constants

// Function Prototypes
void Purchase(double money);

// Main Function
int main()
{
    double money;
    
    printf("How much money you want to earn next year?\n");
    scanf("%lf", &money);
    Purchase(money);

    return 0;
}
// Function Definitions
void Purchase(double money)
{
    if(money <= 5000)
    {
        printf("With this amount of money %.2f you can buy a TV\n", money);
    }
    else if((money > 5000) & (money <= 10000))
    {
        printf("With this amount of money %.2f you can buy a RTV\n", money);
    }
    else if((money > 10000) & (money <= 50000))
    {
        printf("With this amount of money %.2f you can buy a car\n", money);
    }
    else if(money > 50000)
    {
        printf("With this amount of money %.2f you can buy a small house\n", money);
    }
    return;
}

