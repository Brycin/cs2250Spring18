/*
 * =====================================================================================
 *
 *       Filename:  firstPointer.c
 *
 *    Description:  Write a pointer
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:55:49 AM
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
    int i = 5;
    //A pointer to an interger
    //A pointer is an address
    //Use place holder %p
    int* pi = NULL;

    printf("Value of  i [%14d] address [%p]\n", i, &i);
    printf("Value of pi [%14p] address [%p]\n", pi, &pi);
    // Assign value to address
    pi = &i; //pi = the address of our integer i
    printf("Value of pi [%14p] address [%p]\n", pi, &pi);

    // Modify integer through pointer
    *pi = 6;
    printf("Value of  i [%14d] address [%p]\n", i, &i);
    printf("Value of pi [%14p] address [%d]\n", pi, *pi);
    i = 99;
    printf("Value of  i [%14d] address [%p]\n", i, &i);
    printf("Value of pi [%14p] address [%d]\n", pi, *pi);

    return 0;
}
// Function Definitions


