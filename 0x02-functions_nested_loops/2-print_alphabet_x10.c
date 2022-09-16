#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: returns void.
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		i++;
		_putchar('\n');
	}
}
