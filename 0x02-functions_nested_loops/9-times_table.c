#include "main.h"
/**
 * times_table - prints the times table
 *
 * Return: returns void.
 */
void times_table(void)
{
	int rows;
	int cols;
	int d;

	for (rows = 0; rows <= 9; rows++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cols = 1; cols <= 9; cols++)
		{
			d = (rows * cols);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cols < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
