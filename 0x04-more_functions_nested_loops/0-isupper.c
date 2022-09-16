#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: character to be tested
 *
 * Return: 1 if c is uppercase, else print 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}