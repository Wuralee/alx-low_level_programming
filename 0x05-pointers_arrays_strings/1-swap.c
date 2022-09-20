#include "main.h"

/**
 * swap_int - prints function to swap two integers
 *@a:first integer
 *@b:second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
