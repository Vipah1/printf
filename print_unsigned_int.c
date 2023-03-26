#include "main.h"

/**
 * print_u_i - prints unsigned int
 * @vl: variadic list
 * Return: lenght of the number
 */

int print_u_i(va_list vl)
{
	unsigned int n, N, d, i;
	unsigned int len = 0, pt = 1;
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
			N /= 10;
			len++;
		}
		for (i = 1; i < len; i++)
			pt *= 10;
		for (i = 1; i < len + 1; i++)
		{
			d = n / pt;
			_putchar('0' + d);

			counter++;
			n -= d * pt;
			pt /= 10;
		}
	}
	return (counter);
}
