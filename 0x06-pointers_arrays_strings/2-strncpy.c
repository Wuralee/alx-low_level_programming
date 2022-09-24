#include "main.h"
#include <string.h>

/**
 * _strncpy - print function that copies string
 * @dest: the destination value
 * @src: the source value
 * @n: the 3rd value
 * Return: the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
