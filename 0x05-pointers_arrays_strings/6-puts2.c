#include "main.h"
/**
 * puts2 - prints even characters
 * @str: the array
 * Return: void 
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0 ; i <= len ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
