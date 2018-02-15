/*
 * =====================================================================================
 *
 *       Filename:  array2d.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:18:44 AM
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
    int cityA;
    int cityB;
    int DrivingDistances[3][3];
    char repeat = 'y';

    DrivingDistances[0][0] = 0;
    DrivingDistances[0][1] = 960;  // Boston-Chicago
    DrivingDistances[0][2] = 2960; // Boston-Los Angeles
    DrivingDistances[1][0] = 960;  // Chicago-Boston
    DrivingDistances[1][1] = 0;
    DrivingDistances[1][2] = 2011; // Chicago-Los Angeles
    DrivingDistances[2][0] = 2960; // Los Angeles-Boston
    DrivingDistances[2][1] = 2011; // Los Angeles-Chicago
    DrivingDistances[2][2] = 0;

    while(repeat == 'y')
    {
        printf("0: Boston  1: Chicago  2: Los Angeles\n");

        printf("Enter city pair (Ex: 1 2) -- ");
        scanf("%d %d", &cityA, &cityB);

        printf("Distance: %d miles\n", DrivingDistances[cityA][cityB]);

        printf("Do you need another distance? [y/n]\n");

        scanf(" %c", &repeat);
    }

    return 0;
}
// Function Definitions


