#include "main.h"

/**
 * puts2 - print a function that prints every other character
 * of a single string
 * starting with the first character followed by the new line
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
