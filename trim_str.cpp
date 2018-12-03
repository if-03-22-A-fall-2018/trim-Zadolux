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

int main(int argc, char const *argv[]) {
  char rawString[512];
  char trimmedString[512];

  for(int i = 0; i < argc; i++)
  {
    printf("Arg no. %d: '%s'\n", i, argv[i]);
    strcat(rawString, argv[i]);
  }

  trim(rawString, trimmedString);
  printf("Args trimmed: '%s'\n\n", trimmedString);
  return 0;
}
