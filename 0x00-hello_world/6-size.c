#include <stdio.h>

/**
 * main - print the variable in the printf function
 *
 * Description: using the main funtion
 * this program prints "sizes of various data types
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	short s;
	long li;

	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of a short: %ld byte(s)\n", sizeof(s));
	printf("size of a long: %ld byte(s)\n", sizeof(li));
        return (0);
}
