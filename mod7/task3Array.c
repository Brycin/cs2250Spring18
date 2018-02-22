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

// Main Function
int main()
{
// initialize your point to (0,0)
void InItPoint(int* xa, int* ya);
void ShowPoint(int x, int y);
void  MovePoint(int x, int y, int* xa, int* ya);
// Display current point position
// Move your point position
//int point[DIM];
int x = -99;
int y = -99;
ShowPoint(x, y);
InItPoint(&x, &y);
ShowPoint(x, y);
MovePoint(2, 5, &x, &y);
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
void MovePoint(int x, int y, int* xa, int* ya)
{
    *xa = x;
    *ya = y;
    ShowPoint(*xa, *ya);
return;
    }

