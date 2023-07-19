#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 * Return: Nothing.
 */

void times_table(void)
{
	int num, mult, res;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);

		for (mult = 0; mult <= 9; mult++)
		{
			_putchar('.');
			_putchar(' ');

			res = num * mult;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + 48);
			_putchar((res % 10) + 48);
		}
		putchar('\n');
	}
}
