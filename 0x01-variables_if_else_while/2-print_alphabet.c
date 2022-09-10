#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar("%ch\n");
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar("%ch\n");
	}
	return (0);
}
