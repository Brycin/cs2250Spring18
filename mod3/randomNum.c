/*
 * =====================================================================================
 *
 *       Filename:  randomNum.c
 *
 *    Description:  Producing Random Numbers
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:53 AM
 *       Revision:  none
 *       Compiler:  gcc randNum.c -l 
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>  //Needed for rand() function
#include <time.h> //Needed for srand() function: set your random seed

// Constants

// Function Prototypes

// Main Function
int main()
{
    //Set your random seed
    srand((int)time(0));
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
   
    return 0;
}
// Function Definitions


