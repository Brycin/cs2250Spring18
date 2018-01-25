/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  How large of variables can you store
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:01:09 AM
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

    int num = 1;
    unsigned int unum = 1;
    //Using unsigned int gets rid of negative numbers which
    //doubles the amount of positive numbers you can have
    num = num * 1000;
    unum = unum * 1000;
    printf("The size of int is %ld\n", sizeof(num));
    printf("The size of int is %ld\n", sizeof(unum));
    //sizeof returns the size of the variable in bytes
    printf("num = [%d]. unum = [%u]\n", num, unum);
    num = num * 10000; 
    printf("num = [%d]. unum = [%u]\n", num, unum);
    num = num * 10000; 
    unum = unum * 1000;
    printf("num = [%d]. unum = [%u]\n", num, unum);
    num = num * 10000; 
    unum = unum * 1000;
    printf("num = [%d]. unum = [%u]\n", num, unum);
    num = num * 10000; //This num int will error at this point
    unum = unum * 1000; //The unsigned still has enough space
                        // to support this number because it can 
                        // hold twice as many positive integers


    return 0;
}
// Function Definitions


