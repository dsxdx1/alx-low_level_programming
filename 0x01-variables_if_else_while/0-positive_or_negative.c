#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the main function
 * description - generates a random number and prints statements based on its sign
 * Return: returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0){
		printf("is positive\n");
	} else if (n == 0){
		printf("is zero\n");
	} else {
		printf("is negative\n");
	}
	return (0);
}
