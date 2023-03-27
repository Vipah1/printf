#include "main.h"
/**
 * _printf - This function prints formatted string
 * @format: The formatted string
 * @...: variadic parameters
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
int i = 0;
int count = 0;
int (*f)(va_list);
va_list vl;
va_start(vl, format);
if (format == NULL)
return (-1);
while (format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
count = count + 1;
i++;
continue;
}
if (format[i] == '%')
{
f = check_specifier(&format[i + 1]);
if (f != NULL)
{
count = count + f(vl);
i = i + 2;
continue;
}
if (format[i + 1] == '\0')
return (-1);
if (format[i + 1] != '\0')
{
_putchar(format[i + 1]);
count = count + 1;
i = i + 2;
continue;
}
}
}
va_end(vl);
return (count);
}
