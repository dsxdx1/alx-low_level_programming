#include "main.h"
/**
 * print_last_digit - prints the last digits
 * @r: a random integer
 * Return: returns the last digits
 */
int print_last_digit(int r)
{
	int i;

	i = (r % 10);
	if (i < 0)
	{
		i = (-1 * i);
	}

	_putchar(i + '0');
	return (i);
}
