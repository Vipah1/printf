#include "main.h"

/**
 * print_oct - prints octal numbers
 * @vl: variadic number
 * Return: the lenght of the number
 */

int print_oct(va_list vl)
{
	unsigned int n, N, d, i;
	unsigned int len = 0, e = 1;
	int counter;

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
			N /= 8;
			len++;
		}
		for (i = 1; i < len; i++)
			e *= 8;
		for (i = 1; i < len + 1; i++)
		{
			d = n / e;
			_putchar('0' + d);

			counter++;
			n -= d * e;
			e /= 8;
		}
	}
	return (counter);
}
