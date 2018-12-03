/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 9
 * Title:			trim.cpp
 * Author:			M. Wallinger
 * Due Date:		December 4, 2018
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"

void trim(const char* source, char* trimmed_string)
{
  char trimmed[STRLEN];
  int wCounter = 0;
  int trimCounter = 0;

  if(!char_ends(source[0]))
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

        while(source[i + wCounter] == ' ')
        {
          wCounter++;
        }

        if(source[i] != '\0')
        {
          if(!char_ends(source[i + wCounter]))
          {
            trimmed[trimCounter] = source[i];
            trimCounter++;
          }
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

bool char_ends(char checkchar)
{
  if(checkchar == '\0')
    return true;
  else
    return false;
}
