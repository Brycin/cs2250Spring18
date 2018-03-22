/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  Pass multiple parameters to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"

// Main Function
int main()
{
    int a = 28; // a is variable type int
    double w = 190.5; // w is variable type double
    ShowInfo(a, w);

    struct Dude man1; //man1 is variable type struct Dude
    man1.age = 32; // use dot operator to access members of the structure
    man1.weight = 172.3;
    ShowInfo(man1.age, man1.weight);

    SuperDude man2; //Able to make new variable without keyword struct
    man2.age = 45;
    man2.weight = 278.6;
    man2.sex = 'M';
    ShowInfoStruct(&man2);

    return 0;
}

