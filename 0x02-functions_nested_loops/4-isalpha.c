#include "main.h"

/**
 * _isalpha - print a function that checks for alphabetic characters
 * @c: is the int that will be used for argument of the function
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

