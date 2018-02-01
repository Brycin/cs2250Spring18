/*
 * =====================================================================================
 *
 *       Filename:  hwCh3_part2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char oil[11]; //Defining size of string
    int oilValue = 35;
    char tire[]= "Tire rotation"; //Initializing String and letting program create size
    int tireValue = 19;
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    strcpy(oil, "Oil change");//Setting value of uninitialized Oil string
    printf("[%s] $%d\n", oil, oilValue);
    printf("[%s] $%d\n", tire, tireValue);
    
    return 0;
}
// Function Definitions


