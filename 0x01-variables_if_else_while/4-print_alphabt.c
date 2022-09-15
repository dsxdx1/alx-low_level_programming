#include <stdio.h>
/**
 * main - the main function
 * description - prints alphabet except q and e
 * Return: returns zero
*/
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
