#include "main.h"

/**
 * print_array - print n elements of array of integers
 * followed by a new line
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}


