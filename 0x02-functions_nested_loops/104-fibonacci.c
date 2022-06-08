/*
 * File: 104-fibonacci.c
 * Auth: Tabbie Mutiso
 */

#include <stdio.h>
#include <limits.h>
#include <math.h>

/**
 * main -prints the first 98 fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	int a;
	int b;
	long m_lo = 1;
	long n_lo = 2;
	long m_ha = 0;
	long n_ha = 0;
	int limit_len = floor(log10(LONG_MAX / 2));
	long limit = pow(10, limit_len);

	for (a = 0; a < 98; ++a)
	{
		if (m_ha)
		{
			printf("%ld", m_ha);
			for (b = floor(log10(m_lo)) + 1; b < limit_len; ++b)
				putchar('0');
		}
		printf("%ld", m_lo);
		n_lo = n_lo + m_lo;
		m_lo = n_lo - m_lo;
		m_ha = n_ha - m_ha;
		n_ha = n_ha + m_ha;
		if (n_lo >= limit)
		{
			n_ha += n_lo / limit;
			n_lo %= limit;
			m_ha += m_lo / limit;
			m_lo %= limit;
		}
		if (a < 97)
			printf(", ");

	}
	putchar('\n');

	return(0);
}
