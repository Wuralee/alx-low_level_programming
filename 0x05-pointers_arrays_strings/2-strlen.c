#include "main.h"

/**
 * int _strlen - print a function that returns the length of a string
 * @s:string in function
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
