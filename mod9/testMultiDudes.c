/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  Test multiple structures in functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:31 AM
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

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1; //Variable type SuperDude
    SuperDude copy;
    InitInfoStruct(&s1); //Initialize variables
    //The address of SuperDude is passed so you must use & command to pass
    //the address instead of the value
    ShowInfoStruct(&s1); //Display variables
    copy = CopyInfoStruct(&s1); //copy catches returned values from CopyInfoStruct
    ShowInfoStruct(&copy); //Show what values were copied

    return 0;
}
// Function Definitions


