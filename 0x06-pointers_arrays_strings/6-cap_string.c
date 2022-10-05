#include "main.h"
/**
 * cap_string - capitalizes a string.
 * @s - the given string.
 * Return: returns the capitalized string.
 */
char *cap_string(char *s)
{
        int i;

        for (i = 0 ; s[i] != '\0' ; i++)
        {
	       	if ((i == 0 && s[i] != ' ') && (s[i] >= 'a' && s[i] <= 'b'))
				s[i] = s[i] - 32;
		else if ((i > 0 && s[i - 1] == ' ') || (s[i] >= 'a' && s[i] <= 'b'))
				s[i] = s[i] - 32;
        }
        return (s);
}
