#include "main.h"

/**
 * _memset - print a function that fills memory with a constant byte
 * @s: string. memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area filled
 *
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
