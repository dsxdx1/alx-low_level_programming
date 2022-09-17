#include "main.h"
/**
 * _islower - checks if c is lower case
 * @c - input
 * Return: returns 1 if true and 0 if false.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
