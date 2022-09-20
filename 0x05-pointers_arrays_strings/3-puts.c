#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: the string
 *
 * Return: void
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
