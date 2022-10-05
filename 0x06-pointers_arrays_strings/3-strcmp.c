#include "main.h"
/**
 * _strncmp - compares two strings.
 * @dest: string 1.
 * @src: string 2.
 * Return: a positive value if s1 > s2.
 * a negative if s1 < s2
 * returns 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
        int i;


	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);

}

