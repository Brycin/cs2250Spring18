/*
 * =====================================================================================
 *
 *       Filename:  randArr.c
 *
 *    Description:  Random Array Funtions
 *
 *        Version:  1.0
 *        Created:  03/15/2018 09:16:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "randArr.h"

// Constants

// Function Definitions
// Initialize Random Array with nums from 0-100
void InitRandArray(int superAr[])
{
    srand((int)time(0));
    for(int i = 0; i < ASIZE; ++i)
    {
        superAr[i] = rand()%100;
    }
    return;
}
//Display array content
void ShowRandArray(int superAr[])
{
    for(int i = 0; i < ASIZE; ++i)
    {
        printf("[%02d] ", superAr[i]); //The %02d means print two digits and if
                                    //the number is less than 2 digits pad it with 0's
    }
    printf("\n");

    return;
}
