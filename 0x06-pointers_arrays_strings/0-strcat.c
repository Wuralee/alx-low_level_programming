#include "main.h"

/**
 * _strcat - print a function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: to destination
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len])
	{
		dest_len++;
	}

	for (i = 0; src[i]; != 0; i++)
	{
		dest[dest_len++] = src[i];
		dest_len++;
	}
	
	dest[des_len] = '\0';
	return (dest);
}
