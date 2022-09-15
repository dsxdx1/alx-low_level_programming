#include <stdio.h>
/**
 * main - main  functiion
 * description - outputs 0 - 9
 * Return: returns zero
*/
int main(void)
{
	int numbs = '0';

	for (numbs = '0' ; numbs <= '9' ; numbs++)
	{
		putchar(numbs);
		if (numbs == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
