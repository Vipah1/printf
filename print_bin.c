#include "main.h"

/**
 * print_bin - prints binary from unsigned int
 * @vl: variadic list
 * Return: lenght of the number
 */

int print_bin(va_list vl)
{
	unsigned int n, N, i, d;
	unsigned int len = 0, e = 1;
	int counter = 0;

	n = va_arg(vl, unsigned int);
	N = n;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (N != 0)
		{
			N /= 2;
			len++;
		}
		for (i = 1; i < len; i++)
			e *= 2;
		for (i = 1; i < len + 1; i++)
		{
			d = n / e;
			_putchar('0' + d);

			counter++;
			n -= d * e;
			e /= 2;
		}
	}
	return (counter);
}
