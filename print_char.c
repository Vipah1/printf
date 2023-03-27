#include "main.h"
/**
 * print_char - prints char
 * @vl: variadic list
 * Return: 1
 */
int print_char(va_list vl)
{
char c;
int count = 0;
c = (char)va_arg(vl, int);
if (c)
{
count = write(1, &c, 1);
return (count);
}
return (0);
}
