#include "main.h"
/**
 * _strcpy - copies a string to another pointer
 * @dest: copying to
 * @src: copying from
 * Return: the pointer dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;
	int len = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	/*printf("%d", len);*/
	for (j = 0; j <= len ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
