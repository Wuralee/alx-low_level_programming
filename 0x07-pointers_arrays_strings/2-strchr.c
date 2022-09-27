#include "main.h"

/**
 * _strchr - print a function that locates a character in a string
 * @s: string given
 * @c: another character
 *
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
