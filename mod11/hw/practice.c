/*
 * =====================================================================================
 *
 *       Filename:  practice.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2018 01:46:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>  //For C
//#include <iostream>   //For C++
//using namespace std;  //For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    char c[50];
    char a[50];
    int b = 0;
    fgets(a, 50, stdin);
    sscanf(a, "%s %d", c, &b);
    printf("%s\n%d\n", c, b);

    return 0;
}
// Function Definitions


