#include "main.h"

/**
 * print_str - prints string
 * vl: variadic list
 * Return: 1
 */

int print_str(va_list vl)
{
	char *str;
	int i;

	str = va_arg(vl, char *);

	if (str == NULL)
		str = "(nil)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (1);
}
