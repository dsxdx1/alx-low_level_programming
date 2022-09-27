#include "main.h"
/**
 * _strlen - returns the length of a string 
 * @s: the pointer to the string
 * Return: returns the length 
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
