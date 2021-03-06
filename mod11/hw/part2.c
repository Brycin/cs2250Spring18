/*
 * =====================================================================================
 *
 *       Filename:  part2.c
 *
 *    Description:  Making a table with two column
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
    int intDataValue;
    int numCommas = 0;
    int commaIndex = 0;
    int askInput = 0;
    char* subString = NULL;
    char tableStrings[50][50];
    int tableIntegers[50];
    int tableDataIndex = 0;

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
        numCommas = 0;

        //Now enter Data Point
        if(askInput == 0)
        {
            strcpy(strData, "");
            strcpy(intData, "");
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
        while((numCommas == 0) &&
                (strcmp(dataPoint, "-1") != 0))
        {
            askInput = 1;
            printf("Error: No comma in string.\n\n");
            printf("Enter a data point (-1 to stop input):\n");
            strcpy(strData, "");
            strcpy(intData, "");
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
        while((numCommas >= 2) &&
                (strcmp(dataPoint, "-1") != 0))
        {
            askInput = 1;
            printf("Error: Too many commas in input.\n\n");
            printf("Enter a data point (-1 to stop input):\n");
            strcpy(strData, "");
            strcpy(intData, "");
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
        while((numCommas == 1) &&
                (strcmp(dataPoint, "-1") != 0))
        {
            askInput = 1;
            int i;
            numCommas = 0;
            for(i = 0; dataPoint[i] != '\0'; ++i)
            {
                if(dataPoint[i] == ',')
                {
                    ++i;
                    break;
                }
            }
            while(dataPoint[i] == ' ')
            {
                ++i;
            }
            if((isdigit(dataPoint[i]) != 0))
            {
                //Input has correct format at this point
                //Get Data String
                for(commaIndex = 0; dataPoint[commaIndex] != '\0'; ++commaIndex)
                {
                    if(dataPoint[commaIndex] == ',')
                    {
                        break;
                    }
                }
                strncat(strData, dataPoint, commaIndex);
                //Get Data Integer
                subString = strstr(dataPoint, ",");
                strcpy(intData, ++subString);
                printf("Data string: ");
                for(int i = 0; strData[i]; ++i)
                {
                    printf("%c", strData[i]);
                }
                printf("\n");
                strcpy(tableStrings[tableDataIndex], strData);
                sscanf(intData, "%d", &intDataValue);
                printf("Data integer: %d\n\n", intDataValue);
                tableIntegers[tableDataIndex] = intDataValue;
                ++tableDataIndex;
                askInput = 0;
                break;
            }
            else if(isdigit(dataPoint[i]) == 0)
            {
                printf("Error: Comma not followed by an integer.\n\n");
                printf("Enter a data point (-1 to stop input):\n");
                strcpy(strData, "");
                strcpy(intData, "");
                fgets(dataPoint, 50, stdin);
                numCommas = 0;
                for(int i = 0; i < sizeof(dataPoint); ++i)
                {
                    if(dataPoint[i] == '\n')
                    {
                        dataPoint[i] = '\0';
                    }
                    else if(dataPoint[i] == ',')
                    {
                        ++numCommas;
                    }
                }
            }
        }



    }
    printf("\n");
    printf("%33s\n", title);
    printf("%-20s|%23s\n", header1, header2);
    for(int i = 0; i < 44; ++i)
    {
        printf("-");
    }
    printf("\n");
    for(int i =0; i < tableDataIndex; ++i)
    {
        printf("%-20s|%23d\n", tableStrings[i], tableIntegers[i]);
    }
    printf("\n");
    for(int i = 0; i < tableDataIndex; ++i)
    {
        printf("%20s ", tableStrings[i]);
        for(int j = 0; j < tableIntegers[i]; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Function Definitions



