#include "main.h"
/**
 * _isalpha - checks if c is a letter
 * @c: The argument
 * Return: returns 1 on success and 0 0n fail.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
