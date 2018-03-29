/*
 * =====================================================================================
 *
 *       Filename:  myMalloc.c
 *
 *    Description:  Dynamically allocated memory
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:41:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //Need for malloc() command

// Constants

// Function Prototypes

// Main Function
int main()
{
    int num;
    int* sa = NULL; //Int pointer
    //Always initialize pointers to NULL. You can test for Null
    //if you don't initialize it'll just have garbage you cant test for
    printf("How many numbers do you need?\n");
    scanf("%d", &num);
    // malloc take one input: number of bytes
    // malloc(<bytes>)
    printf("int is [%lu] bytes\n", sizeof(int)); //use %lu for long unsigned int
    printf("int array of [%d] is [%lu] bytes\n",
            num, num * sizeof(int));
    //cast address to pointer type (*<type>)
    sa = (int*) malloc(num * sizeof(int)); // sa is now the address where an array lives
    //Initialize sa array
    for(int i = 0; i < num; ++i)
    {
        sa[i] = i + 10;
    }
    //Display array
    for(int i = 0; i < num; ++i)
    {
        printf("%d element is [%d]\n", i, sa[i]);
    }

    free(sa); //This clears the memory where sa is pointing
    //sa still holds same value but nothing exist there anymore
    return 0;
}
// Function Definitions


