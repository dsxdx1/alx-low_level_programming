#include "main.h"
/**
 * more_numbers - prints 0-14 10x
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j;

	while (i < 15 )
	{
		for (j = 0 ; j <= 14 ; j++)
			_putchar(j + '0');
		i++;
	}
}
