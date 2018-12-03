/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 8
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
#ifndef __TRIM_H
#define __TRIM_H

#include <stdio.h>
#include <string.h>

#define STRLEN 250
// If STRLEN would be too small, the following error would occur:
// "initializer-string for char array is too long"

void trim(const char* source, char* trimmed_string);
bool char_ends(char checkchar);

#endif
