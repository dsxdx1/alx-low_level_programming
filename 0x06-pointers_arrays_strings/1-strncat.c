#include "main.h"
/**
 * _strncat - concatenates two strings to n.
 * @dest: concatenated.
 * @src: concatenator.
 * @n: the amount of n.
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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
        for (i = 0; i < n && src[i] != '\0' ; i++)
        {
                dest[len + i] = src[i];
                coun++;
        }
        return dest;
}
