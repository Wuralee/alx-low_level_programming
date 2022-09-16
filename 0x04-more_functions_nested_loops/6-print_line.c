#include "main.h"

/**
 * print_line - function to print a straight line
 * @n: parameter
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
