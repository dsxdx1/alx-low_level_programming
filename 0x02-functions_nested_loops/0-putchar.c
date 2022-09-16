#include "main.h"
/**
 * main - prints _putchar to stdout
 *
 * Return: returns 0.
 */

int main(void)
{
	char *i	= "_putchar";

	while (*i)
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');
	return (0);
}
