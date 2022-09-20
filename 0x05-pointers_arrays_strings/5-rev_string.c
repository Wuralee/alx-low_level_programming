#include "main.h"

/**
 * rev_string -  print a function that reverses a string
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, k;
	char *b, aux;

	b = s;
	
	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		b++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *b;
		*b = aux;
		b--;
	}
}

