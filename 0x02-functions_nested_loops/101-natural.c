/*
 * File: 101-natural.c
 * Auth: Tabbie Mutiso
 */
#include <stdio.h>
#include "main.h"

/**
 * main - lists all natural numbers
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
