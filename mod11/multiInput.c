/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  multiple inputs with scanf
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Brycin Silvester (), brycinsilvester@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Help(void);

// Main Function
int main()
{
    int hour;
    int min;
    //int rc = 0; //Return code
    char AmPm[3];
    //int feet, in;
    //printf("Enter feet and inches separated by a space:\n");
    //scanf("%d %d", &feet, &in);
    printf("Enter the time in this format: HH:MM AM/PM\n");
    //Validate scanf. Make sure it returns correct value
    if(scanf("%2d:%2d %2s", &hour, &min, AmPm) != 3)
    {
        Help();
    }
    else
    {
    printf("You entered: %d:%d %s\n", hour, min, AmPm);
    }
    //You can also check the return value using a variable
    //if rc != 3 then call help function
    //rc = scanf("%2d:%2d %2s", &hour, &min, AmPm);
    //printf("Number of inputs you entered: %d\n", rc);

    return 0;
}
// Function Definitions

void Help(void)
{
    printf("Bad format. Please make sure you enter time format as shown below.\n");
    printf("Format: HH:MM AM/PM\n");
    return;
}


