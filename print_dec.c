#include "main.h"

/**
 * print_dec - prints decimal
 * @vl: variadic list
 * Return: lenght of the number
 */

int print_dec(va_list vl)
{
	//the same as print_int
	int n, N, i, d;
	int counter = 0, len = 0, pt = 1;

	n = va_arg(vl, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			counter++;
		}

		N = n;
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
			if (n < 0)
				_putchar((-1 * d) + 48);
			counter++;
			n -= d * pt;
			pt /= 10;
		}
	}
	return (counter);
}
