/*
 * =====================================================================================
 *
 *       Filename:  stockProfit.c
 *
 *    Description:  Calculate the Profit of trading stocks using a function
 *
 *        Version:  1.0
 *        Created:  02/26/2018 07:26:26 PM
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
double Profit(int ns);

// Main Function
int main()
{
    int numStocks;
    printf("Enter number of stocks sold\n");
    scanf("%d", &numStocks);
    printf("Total Profit: %lf\n", Profit(numStocks));


    return 0;
}
// Function Definitions
// Calculates the profit or loss from number of shares (ns)
double Profit(int stocksSold)
{
    double profit = 0.0;
    int ns = 0.0;
    double pp = 0.0;
    double sp = 0.0;
    double pc = 0.0;
    double sc = 0.0;
    for(int i = 0; i < stocksSold; ++i)
    {
        printf("Enter number of shares sold for stock %d:\n", i + 1);
        scanf("%d", &ns);
        printf("Enter price per share of stock %d:\n", i + 1);
        scanf("%lf", &pp);
        printf("Enter sale price per share for stock %d:\n", i + 1);
        scanf("%lf", &sp);
        printf("Enter purchase commission paid for stock %d:\n", i + 1);
        scanf("%lf", &pc);
        printf("Enter sales commission paid for stock %d:\n", i + 1);
        scanf("%lf", &sc);

        double prof = ((ns * sp) - sc) - ((ns * pp) + pc);
        profit = profit + prof;
    }
    return profit;
}



