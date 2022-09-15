#include <stdio.h>
/**
 * main - outputs the alphabet in reverse
 * description - z-a
 * Return: returns zero
*/
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
