#include "main.h"

/**
 * print_int - prints integers
 * @vl: variadic list
 * Return: output lenght
 */

int print_int(va_list vl)
{
	int i, d, n, N;
	int counter = 0, len = 0, pt = 1;

	n = va_arg(vl, int);

	if (n = 0)
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

		N = n; //to not destroy n
		while (N != 0)
		{
			N = N / 10;
			len++; //will get us the N lenght
		}

		for (i = 1; i < len; i++)
			pt *= 10; // will use it to get the digits of n

		for (i = 1; i < len + 1; i++)
		{
			d = n / pt;

			if (n < 0)
				_putchar((-1 * d) + 48);
			else
				_putchar(d + '0');

			counter++;
			n -= d * pt;
			pt = pt / 10;
		}
	}
	return (counter);
}
