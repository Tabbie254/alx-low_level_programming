#include <stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - prints out number text
 *
 * Return: Always 0 (if success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	lastd = n% 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is  0\n", n, lastd);
	}
	else if (lasd < 6 && lastd !=0)
	{
		print("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}