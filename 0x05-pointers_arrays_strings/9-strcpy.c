#include "main.h"

/**
 * _strcpy - print the string pointed to by src
 * @dest: destination value
 * @src: source value
 *
 * Return: the pointer to the destination
 */

char * strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
