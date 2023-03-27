#include "main.h"

/**
 * print_rev - prints string in reverse
 * @vl: variadic list
 * Return: output lenght
 */

int print_rev(va_list vl)
{
	int i, j, counter = 0;
	char *rev;

	rev = va_arg(vl, char *);
	if (rev == NULL)
		rev = ")lin("; /* cuz it will be reversed later */

	for (i = 0; rev[i] != '\0'; i++)
	{
		/* i the lenght of the input*/
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(rev[j]);
		counter++;
	}
	return (counter);
}
