#include "main.h"
/**
 * puts_half - prints the odd numbers
 * @str: the pointer array
 * Return: void.
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;
	if ((len % 2) == 0)
		n = (len / 2);
	else
		n = ((len  + 1) / 2);
	for (i = n ; i <= (len - 1) ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
