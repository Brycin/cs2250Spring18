/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:19:15 AM
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

// Constants

// Function Definitions

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Display age
 * =====================================================================================
 */
void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.1f]\n", weight);
    return;
}

    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  ShowInfoStruct
     *  Description:  Displays SuperDude Info
     * =====================================================================================
     */
void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%.1f]\n", sd.weight);
    printf("Your sex is [%c]\n", sd.sex);
    return;
}

