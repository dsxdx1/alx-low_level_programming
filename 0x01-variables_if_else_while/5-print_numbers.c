#include <stdio.h>
/**
 * main - prints single base 10 digits
 * description - 0-9
 * Return: returns zero
*/
int main(void)
{
	int nums;

	for (nums = 0 ; nums < 10 ; nums++)
		printf("%d", nums);
	printf("\n");
	return (0);
}
