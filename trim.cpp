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
  char trimmed[STRLEN];
  int wCounter = 0;
  int trimCounter = 0;

  if(source[0] != '\0')
  {
    while(source[wCounter] == ' ')
    {
      wCounter++;
    }

    for(int i = wCounter; i < STRLEN; i++)
    {
      if(source[i] == ' ')
      {
        wCounter = 0;

        while(source[wCounter] == ' ')
        {
          wCounter++;
        }

        if(source[i] != '\0')
        {
          trimmed[trimCounter] = source[i];
          trimCounter++;
        }
      }
      else
      {
        trimmed[trimCounter] = source[i];
        trimCounter++;
      }
    }

    strcpy(trimmed_string, trimmed);
  }
  else
  {
    strcpy(trimmed_string, source);
  }
}
