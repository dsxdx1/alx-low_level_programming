#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: concatenated.
 * @src: concatenator.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;
	int coun = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
		len++;
	}
	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
		coun++;
	}
	dest[coun + i] = '\0';
	return dest;
}
