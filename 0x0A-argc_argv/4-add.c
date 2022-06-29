#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main funct
 * @argc: param count
 * @argv: param pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			for (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg[i]);
	}
	printf("%d\n", sum);
	return (0);
}
