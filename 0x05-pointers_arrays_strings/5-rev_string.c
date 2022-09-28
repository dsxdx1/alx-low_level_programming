#include "main.h"
/**
 * print_rev - reverses a string
 * @s: the pointer to the string
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char *t = s;
	char *arry;

	while (*t != '\0')
	{
		t++;
		len++;
	}
	for (i = 0 ; i < len ; i++)
		arry[len - 1 - i] = s[i]; 
	for (i = 0 ; i < len ; i++)
		s[i] = arry[i];
}
