#include <stdio.h>
/**
 * main - iterates from 1-100
 *
 * Return: always 0.
 */
int main(void)
{
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";
	char i;

	for (i = 1 ; i <= 100 ; i++)
	{
		
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("%s", fb);
		}
		else if ((i % 3) == 0)
		{
			printf("%s", f);
		}
		else if ((i % 5) == 0)
		{
			printf("%s", b);
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
