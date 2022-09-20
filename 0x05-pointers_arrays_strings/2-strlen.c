#include "main.h"

/**
 * int_strlen - print a function that returns the length of a string
 * @s:string in function
 *
 * Return: string length
 */

int_strlen(char *s)
{
	int ch = 0;

	for (; *s != '\0'; s++)
	{
		ch++;
	}
	return (ch);
}
