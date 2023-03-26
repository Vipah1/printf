#include "main.h"

/**
 * print_char - prints char
 * @vl: variadic list
 * Return: 1
 */

int print_char(va_list vl)
{
char c;
c = va_arg(vl, int);
_putchar(c);
return (1);
}
