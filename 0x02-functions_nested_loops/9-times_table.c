#include "main.h"

/**
 * times_table - prints the 9 times table ,starting with 0
 * @prod - is the result of the multiplied value
 * @mult - is the mulipilication sign
 * @num - is the number used to carry out the task
 */

void times_table(void)
{
	int num, mult, prod;

		for (num = 0; num <= 9; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= 9; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');

				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
}
