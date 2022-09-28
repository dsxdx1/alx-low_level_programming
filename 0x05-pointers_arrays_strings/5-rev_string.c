#include "main.h"
/**
 * print_rev - reverses a string
 * @s: the pointer to the string
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char *t = s;

	while (*t != '\0')
	{
		t++;
		len++;
	}
	_puts(t);
	for (i = len ; i >= 0 ; --i)
		_putchar(s[i]);
	_putchar('\n');
}
