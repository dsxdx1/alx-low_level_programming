#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
       	int i, bar;
	
	if (n <= 0)
       	{
	       	_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (bar = 1 ; bar <= i ; bar++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
