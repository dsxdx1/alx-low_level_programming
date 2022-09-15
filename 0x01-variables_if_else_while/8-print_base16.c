#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 * description - hexadecimal numbers
 * Return: returns zero
 */
int main(void)
{
	char num;
	char hex;

	for (num = '0'; num <= '9' ; num++)
		putchar(num);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
