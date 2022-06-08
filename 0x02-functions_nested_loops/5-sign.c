/*
 * File: 5-sign.c
 * Auth:Tabbie Mutiso
 */
#include "main.h"

/**
 * print_sign - Prints sign of aa number
 * @n: number of which the sign will be printed
 *
 * Return: 1 if the number is > zero
 * 0 if is zero 
 * -1 if the number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
