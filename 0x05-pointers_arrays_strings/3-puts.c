#include "main.h"
/**
 * _puts - prints a function to stdout
 * @str: the string
 * Return: str
 */
void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

