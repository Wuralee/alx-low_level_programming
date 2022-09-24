#include "main.h"
#include <string.h>

/**
 * _strncat - function to correct some chars
 * @dest: the destination
 * @src: the source value
 * @n: the 3rd value
 *
 * Return: the string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
