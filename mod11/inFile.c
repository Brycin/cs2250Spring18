/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Read data from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:31 AM
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
#define NUM 4 //Another way to define a constant. Doesn't end with a semi colon
//Equivalent of: const int NUM = 4;

// Function Prototypes

// Main Function
int main()
{
    //int data[NUM]; //Static Memory
    int* userNums; //Dynamic Memory
    int arrSize = 0; //User specified number of integers
    FILE* inFile; //a pointer to the address of a variable of FILE type
    printf("Opening file data.txt\n");
    //Now open file for Reading purposes
    inFile = fopen("data.txt", "r"); //fopen arguments: fopen("file_name", "purpose") purposes: r = read only, w = write
    //If it can open the file it will load the file. If it can't it will return NULL to the pointer
    //Test inFile against NULL to make sure there wasn't an error
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;
    }
    //Now scan the file and get number of records
    fscanf(inFile, "%d", &arrSize); //Scans the txt file and stores the first integer into arrSize
    printf("arrSize[%d]\n", arrSize);

    //Now Allocate memory
    userNums = (int*) malloc(sizeof(int)*arrSize);
    //Verify you allocated your memory;
    if(userNums == NULL)
    {
        printf("Unable to malloc memory\n");
        fclose(inFile);
        return -2;
    }
    //arrSize is the first member of the file, which in this case is
    //the Header record or the number of records in the file.
    int i = 1; // Skip the Header record
    while(i <= arrSize)
    {
        fscanf(inFile, "%d", &(userNums[i - 1])); //[i - 1] so you skip the header record but you allocate info starting at index 0
        ++i;
    }
    //Print records
    i = 0;
    while(i < arrSize)
    {
        printf("Numbers [%d]\n", userNums[i]);
        ++i;
    }


    //Now close the file and free the malloc
    fclose(inFile);
    free(userNums);

    return 0;
}
// Function Definitions


