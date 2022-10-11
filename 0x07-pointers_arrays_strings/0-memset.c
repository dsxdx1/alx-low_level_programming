#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: the memory location.
 * @b: the constant byte.
 * @n: the amount.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

