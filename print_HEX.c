#include "main.h"

/**
 * print_HEX - prints hexadecimals with uppercases
 * @vl: variadic list
 * Return: the lenght of number
 */

int print_HEX(va_list vl)
{
	unsigned int n, N, d, i;
	unsigned int len = 0, e = 1;
	int counter = 0;
	char HEX;

	n = va_arg(vl, unsigned int);
	N = n;
	HEX = 'A' - ':';
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (N != 0)
		{
			N /= 16;
			len++;
		}
		for (i = 1; i < len; i++)
			e *= 16;
		for (i = 1; i < len + 1; i++)
		{
			d = n / e;

			if (d < 10)
				_putchar('0' + d);
			else
				_putchar(d + '0' + HEX);

			counter++;
			n -= d * e;
			e /= 16;
		}
	}
	return (counter);
}
