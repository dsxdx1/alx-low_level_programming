#include "main.h"
/**
 * _isupper - checks if uppercase
 * @c:the arg
 * Return: returns 1 true and 0 on false.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
