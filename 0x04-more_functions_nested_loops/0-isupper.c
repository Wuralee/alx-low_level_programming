#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check if character uppercase
 *
 * @c: checks input of function
 *
 * Return: print 1 if c is uppercase otherwise 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
