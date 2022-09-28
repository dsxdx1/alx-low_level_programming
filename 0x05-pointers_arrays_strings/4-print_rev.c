#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the pointer to the string
 * Return: void.
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len ; i >= 0 ; --i)
		_putchar(s[i]);
	_putchar('\n');
}
