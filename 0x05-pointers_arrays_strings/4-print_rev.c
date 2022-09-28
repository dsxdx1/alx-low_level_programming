#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the pointer to the string
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char *t = s;

	while (*t != '\0')
	{
		t++;
		len++;
	}
	for (i = len ; i >= 0 ; --i)
		_putchar(s[i]);
	_putchar('\n');
}
