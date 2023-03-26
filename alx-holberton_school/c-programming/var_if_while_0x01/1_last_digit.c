#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that tells user what type of variable
 * was entered
 *
 * Return: Zero '0' suceess
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	printf("Enter the value here\n");
	scanf("%i", &x);

	printf("Last digit of %i is %i and is ", x, (x % 10));

	if ((x%10) > 5)
	{
		printf("greater than 5\n");
	}

	else if ((x%10) == 0)
	{
		printf("0\n");
	}

	else if ((x%10) < 6)
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
