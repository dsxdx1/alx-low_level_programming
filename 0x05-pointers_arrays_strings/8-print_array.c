#include "main.h"
/**
 * print_array - prints  n number of chars from an array
 * @a: the given pointer array
 * @n: the number of chars
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1 ; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	}
	printf("\n");
}
