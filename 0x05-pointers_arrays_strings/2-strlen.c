#include "main.h"

/**
 * int_strlen - print a function that returns the length of a string
 * @s:string in function
 *
 * Return: 0
 */

int_strlen(char *s)
{
	int sl = 0;

	for (; *s != '\0'; s++)
	{
		sl++;
	}
	return (0);
}
