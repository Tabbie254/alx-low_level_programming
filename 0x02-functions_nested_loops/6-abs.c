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
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	else
		return (i);
}