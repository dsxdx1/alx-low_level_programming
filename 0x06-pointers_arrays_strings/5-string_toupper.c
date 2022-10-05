#include "main.h"
/**
 * string_toupper - converts string from lower to upper.
 * @n: the given string.
 * Return: an uppercase string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ( s[i] >= 'a' && s[i] <= 'b')
			s[i] = s[i] - 32;
	}
	return (s);
}
