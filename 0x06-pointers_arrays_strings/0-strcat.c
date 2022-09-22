#include "main.h"

/**
 * _strcat - print a function that concatenates two strings
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest
 *
 * Return: to @des
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0 i;

	while (dest[dest_len])
	{
		dest_len++;
	}

	for (i = 0; src[i]; != 0; i++)
	{
		dest[dest_len++] = src[i];
	}
	
	dest[des_len] = '\0';

	return (dest);
}
