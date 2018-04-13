/*
 * =====================================================================================
 *
 *       Filename:  part2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2018 10:28:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char title[50] = "";
    char header1[50] = "";
    char header2[50] = "";
    char dataPoint[50] = "";
    char strData[50] = "";
    char intData[50] = "";
    int numCommas = 0;

    //Get tiele of the table
    printf("Enter a title for the data:\n");
    fgets(title, 50, stdin);
    for(int i = 0; i < sizeof(title); ++i)
    {
        if(title[i] == '\n')
        {
            title[i] = '\0';
        }
    }
    printf("You entered: %s\n\n", title);

    //Get the headers for column 1
    printf("Enter the column 1 header:\n");
    fgets(header1, 50, stdin);
    for(int i = 0; i < sizeof(header1); ++i)
    {
        if(header1[i] == '\n')
        {
            header1[i] = '\0';
        }
    }
    printf("You entered: %s\n\n", header1);

    //Get the header for column 2
    printf("Enter the column 2 header:\n");
    fgets(header2, 50, stdin);
    for(int i = 0; i < sizeof(header2); ++i)
    {
        if(header2[i] == '\n')
        {
            header2[i] = '\0';
        }
    }
    printf("You entered: %s\n\n", header2);

    //Get data point. Quit if they enter -1
    while(strcmp(dataPoint, "-1") != 0)
    {
        strcpy(strData, "");
        strcpy(intData, "");

        //Now enter Data Point
        printf("Enter a data point (-1 to stop input):\n");
        fgets(dataPoint, 50, stdin);
        for(int i = 0; i < sizeof(dataPoint); ++i)
        {
            if(dataPoint[i] == '\n')
            {
                dataPoint[i] = '\0';
            }
            if(dataPoint[i] == ',')
            {
                ++numCommas;
            }
        }
        while((numCommas == 0) &&
                (strcmp(dataPoint, "-1") != 0))
        {
            printf("Error: No comma in string.\n\n");
            printf("Enter a data point (-1 to stop input):\n");
            fgets(dataPoint, 50, stdin);
            numCommas = 0;
            for(int i = 0; i < sizeof(dataPoint); ++i)
            {
                if(dataPoint[i] == '\n')
                {
                    dataPoint[i] = '\0';
                }
                if(dataPoint[i] == ',')
                {
                    ++numCommas;
                }
            }
        }
        while((numCommas == 2) &&
                (strcmp(dataPoint, "-1") != 0))
        {
            printf("Error: Too many commas in input.\n\n");
            printf("Enter a data point (-1 to stop input):\n");
            fgets(dataPoint, 50, stdin);
            for(int i = 0; i < sizeof(dataPoint); ++i)
            {
                if(dataPoint[i] == '\n')
                {
                    dataPoint[i] = '\0';
                }
                if(dataPoint[i] == ',')
                {
                    ++numCommas;
                }
            }
        }



    }
            return 0;
        }
// Function Definitions


