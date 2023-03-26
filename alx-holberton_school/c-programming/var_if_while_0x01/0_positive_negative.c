#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that tells user about the
 * variable the type of variable entered
 * Return: Zero '0' Success
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	printf("Enter the value here\n");
	scanf("%i", &x);

	if (x > 0)
	{
		printf("The value entered %i is positive\n", x);
	}

	if (x == 0)
	{
		printf("The value entered %i is zero\n", x);
	}

	if (x < 0)
	{
	       printf("The value entered %i is negative\n", x);
	}

	return (0);
}
