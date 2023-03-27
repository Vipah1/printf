#include "main.h"
/**
 * print_str - prints string
 * @vl: variadic list
 * Return: Numebr of characters printed
 */
int print_str(va_list vl)
{
char *str;
int i;
int count = 0;
str = va_arg(vl, char *);
if (str == NULL)
return (-1);
while (str[i])
{
count = write(1, &str, 1);
i = i + 1;
}
return (count);
}
