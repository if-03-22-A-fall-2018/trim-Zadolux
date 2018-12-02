/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define STRLEN 16

void trim(const char* source, char* trimmed_string)
{
  int counter = 0;
  char trimmed[STRLEN];
  bool isStringEnd = false;

  if(source[0] != '\0')
  {
    for(int i = 0; i < STRLEN; i++)
    {
      if(source[i] == ' ' && !isStringEnd)
      {
        int whitespaceCounter = 0;

        while(source[i + whitespaceCounter] == ' ' && !isStringEnd)
        {
          if(source[i + whitespaceCounter] == ' ')
          {
            whitespaceCounter++;
          }
          else
          {
            if(source[i + whitespaceCounter] == '\0')
            {
              isStringEnd = true;
            }
          }
        }

          counter++;
          trimmed[counter] = source[i];
      }
      else
      {
        if(!isStringEnd)
        {
          trimmed[counter] = source[i];
          counter++;
        }
        else
        {
          trimmed[counter] = '\0';
        }
      }
    }

    strcpy(trimmed_string, trimmed);
  }
  else
  {
    strcpy(trimmed_string, source);
  }
}
