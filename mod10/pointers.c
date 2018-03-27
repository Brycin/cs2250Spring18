/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:43:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i = 7;
    int* pi;//Statically allocated
    pi = NULL;
    //int* pi = NULL;
    //pi = &i;
    //printf("i[%d] value that points to pi[%d]\n", i, *pi);
    printf("Enter number of elsements: \n");
    scanf("%i", &i);
    //Define array with input
    //Use malloc: Takes one argument: Number of bytes
    //malloc(bytes); returns a pointer
    //... when you are done with the memory you need to free it back up
    //free(memory or address, use a pointer)
    //type pointer = malloc(type);
    //to get the number of bytes of a certain type use sizeof(type)
    //so signature to ask for memory is:
    //type pointer = (type*) malloc(sizeof(type);
    pi = (int*) malloc(i * sizeof(int));
    //int ar[i]; // Needs to be dynamically allocated
    //for(int j = 0; j< i; ++j)
    //{
    //    printf("ar[%d] = %d\n", j, ar[j]);
    //}
    free(pi); //Always free up memory after your done. One free per malloc

    return 0;
}
// Function Definitions


