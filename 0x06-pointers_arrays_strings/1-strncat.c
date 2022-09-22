#include "main.h"

/**
 * _strncat - print a string that concatenates two strings
 * @dest: the destination
 * @src: the source value
 * @n: the limit of the concatenation
 *
 * Return: to destination
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
