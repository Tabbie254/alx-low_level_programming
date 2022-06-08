/*
 * File 11-print_to_98.c
 * Auth: Tabbie Mutiso
 */

#include <stdio.h>

/**
 * print_to_98 - prints all numbers 
 * @n: number being counted
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
