/*
 * =====================================================================================
 *
 *       Filename:  hwCh3_part2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char oil[] = "Oil change"; //Defining size of string
    int oilValue = 35;
    char tire[]= "Tire rotation"; //Initializing String and letting program create size
    int tireValue = 19;
    char wash[] = "Car wash";
    int washValue = 7;
    char wax[] = "Car wax";
    int waxValue = 12;
    char userInput1[10];
    char userInput2[10];
    char userInput3[10];
    char userInput4[10];
    int cost1;
    int cost2;
    int totalCost;
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    printf("Select first service:\n");
    scanf("%s %s", userInput1, userInput2);
    printf("Select second service:\n");
    scanf("%s", userInput3);
    if(strcmp(userInput3, "-") != 0)
{
    scanf("%s", userInput4);
}
    printf("\nDavy's auto shop invoice\n\n");

    if((strcmp(userInput1, "Oil") == 0) && (strcmp(userInput2, "change") == 0))
{
    printf("Service 1: %s, $%d\n", oil, oilValue);
    cost1 = oilValue;
}
    else if((strcmp(userInput1, "Tire") == 0) && (strcmp(userInput2, "rotation") == 0))
{
    printf("Service 1: %s, $%d\n", tire, tireValue);
    cost1 = tireValue;
}
    else if((strcmp(userInput1, "Car") == 0) && (strcmp(userInput2, "wash") == 0))
{
    printf("Service 1: %s, $%d\n", wash, washValue);
    cost1 = washValue;
}
    else if((strcmp(userInput1, "Car") == 0) && (strcmp(userInput2, "wax") == 0))
{
    printf("Service 1: %s, $%d\n", wax, waxValue);
    cost1 = waxValue;
}
    if((strcmp(userInput3, "Oil") == 0) && (strcmp(userInput4, "change") == 0))
{
    printf("Service 2: %s, $%d\n", oil, oilValue);
    cost2 = oilValue;
}
    else if((strcmp(userInput3, "Tire") == 0) && (strcmp(userInput4, "rotation") == 0))
{
    printf("Service 2: %s, $%d\n", tire, tireValue);
    cost2 = tireValue;
}
    else if((strcmp(userInput3, "Car") == 0) && (strcmp(userInput4, "wash") == 0))
{
    printf("Service 2: %s, $%d\n", wash, washValue);
    cost2 = washValue;
}
    else if((strcmp(userInput3, "Car") == 0) && (strcmp(userInput4, "wax") == 0))
{
    printf("Service 2: %s, $%d\n", wax, waxValue);
    cost2 = waxValue;
}
    else if((strcmp(userInput3, "-") == 0))
{
    printf("Service 2: No service\n");
    cost2 = 0;
}
    totalCost = cost1 + cost2;
    printf("\nTotal: $%d\n", totalCost);

    return 0;
}
// Function Definitions

