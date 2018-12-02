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
  bool noMoreSpaces = false;
  char trimmed[STRLEN];

  if(source[0] != '\0')
  {
    for(int i = 0; i < STRLEN; i++)
    {
      if(source[i] == ' ' && !noMoreSpaces)
      {
        trimmed[counter] = source[i];
        counter++;
      }
      else
      {
        noMoreSpaces = true;
      }
    }
  }
  else
  {
    strcpy(trimmed_string, source);
  }
}
