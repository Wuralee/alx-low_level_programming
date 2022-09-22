#include "main.h"

/**
 * _strcat - print a function that concatenates two strings
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest
 *
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, det_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
