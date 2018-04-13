/*
 * =====================================================================================
 *
 *       Filename:  part1.c
 *
 *    Description:  Parsing Strings
 *
 *        Version:  1.0
 *        Created:  04/08/2018 11:35:01 AM
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
  char inputString[50] = "";
  char wordOne[50] = "";
  char wordTwo[50] = "";
  int commaIndex = 0;
  char* subString = NULL;

  //If input is not q ask user for input
  while (strcmp(inputString, "q\n") != 0)
  {
      strcpy(wordOne, "");
      strcpy(wordTwo, "");

      //After both strings are now cleared read user input
      printf("Enter input string:\n");
      fgets(inputString, 50, stdin);

      //Check to make sure user input contains a comma and is not 'q'
      while ((strchr(inputString, ',') == NULL) &&
            (strcmp(inputString, "q\n") != 0))
      {
          printf("Error: No comma in string.\n\n");
          printf("Enter input string:\n");

          fgets(inputString, 50, stdin);
      }

      //Quit if inputString is 'q'
      if(strcmp(inputString, "q\n") == 0)
      {
          break;
      }

      //Get the first word
      for(commaIndex = 0; inputString[commaIndex] != '\0'; ++commaIndex)
      {
          if(inputString[commaIndex] == ',')
          {
              break;
          }
      }
      strncat(wordOne, inputString, commaIndex);

      //Get the second word
      subString = strstr(inputString, ",");
      strcpy(wordTwo, ++subString);

      //Print two words and omit any spaces
      printf("First word: ");
      for(int i = 0; wordOne[i] != '\0'; ++i)
      {
          if(wordOne[i] != ' ')
          {
              printf("%c", wordOne[i]);
          }
      }
      printf("\n");

      printf("Second word: ");
      for(int i = 0; wordTwo[i] != '\0'; ++i)
      {
          if(wordTwo[i] != ' ')
          {
              printf("%c", wordTwo[i]);
          }
      }
      printf("\n");
  }

    return 0;
}
// Function Definitions
