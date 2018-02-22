/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Update map positions
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:09 AM
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
const int x = 0;
const int y = 1;
const int DIM = 2;
// Function Prototypes
// initialize your point to (0,0)
void InItPoint(int* xa, int* ya);
// Show your current point position
void ShowPoint(int x, int y);
//Move your point position
void  MovePoint(int* xa, int* ya);//The * gets the reference of xa using the address
                                  //Rather than just the value because functions forgets
                                  //The value after the function returns

// Main Function
int main()
{

int x = -99;
int y = -99;
ShowPoint(x, y);
InItPoint(&x, &y);
ShowPoint(x, y);
MovePoint(&x, &y);
    return 0;
}
// Function Definitions
void ShowPoint(int x, int y)
{
    printf("X-Position = [%d]\n", x);
    printf("Y-Position = [%d]\n", y);
return;
}
void InItPoint(int* xa, int* ya)
{
ShowPoint(*xa, *ya);
    *xa = 0;
    *ya = 0;
    ShowPoint(*xa, *ya);
return;
}
void MovePoint(int* xa, int* ya)
{
    
    printf("Enter your new x-coordinate\n");
    scanf("%d", xa); //Do not put &xa because & means address and xa is already an address
    printf("Enter your new y-coordinate\n");
    scanf("%d", ya); //Do not put &xa because & means address and xa is already an address
    ShowPoint(*xa, *ya);
return;
    }

