/*
 * =====================================================================================
 *
 *       Filename:  superlib.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:34:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef __SUPERLIB_H__
#define __SUPERLIB_H__
// Constants
// inside header files add the key work static before the constant definition
static const int INPUT_STR_SIZE = 50; //Input string size

// Function Prototypes
void StrSpaceToHyphen(char modString[], char separator);
//Task1: Function takes a string, returns number of digits
int StrCountDigits(char modString[]);

#endif // __SUPERLIB_H__
