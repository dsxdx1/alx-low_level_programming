#include "main.h"
/**
 * _puts - prints a function to stdout
 * @str: the string 
 * Return: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
	}
	_putchar('\n');
	Return (0);
}
