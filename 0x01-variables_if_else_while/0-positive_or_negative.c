#include <stdlib.h>
#include <time.h>

/*
 * main - print result if number is positive, zero and negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
		/* code goes here */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("i% is zero\n", n);
	}
	else if (n < 0)
	{
		printf("i% is negative\n", n);
	}
	return (0);
}
