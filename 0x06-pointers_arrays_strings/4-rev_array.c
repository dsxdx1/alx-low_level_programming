#include "main.h"
/**
 * reverse _array - reverses the content of an array.
 * @a: given array.
 * @n: the size of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0 ; i < n ; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		
	}
}
