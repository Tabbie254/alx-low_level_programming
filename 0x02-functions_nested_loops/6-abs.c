/*
 * File: 6-abs.c
 * Auth: Tabbie Mutiso
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to be computed
 *
 * Return: the absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (0);
	else
		return (-n);
}
