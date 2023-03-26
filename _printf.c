#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
* _printf - This function prints formatted string
* @format: The formatted string
* @...: variadic parameters
* Return: Number of printed characters
*/

int _printf(const char *format, ...)
{
int i = 0; /* format index */
int count = 0; /* the number of characters write returns at the end */
int value = 0; /* holds the return value (number of characters)  of write */
int (*f)(va_list);
va_list vl; /* variadic arguments for printf extra arguments */
va_start(vl, format);

/* This prevents parsing a null pointer */
if (format == NULL)
{
return (-1);
}

/*This handles the printing of each index of a string*/
while (format[i])
{
if (format[i] != '%')
{
value  = write(1, &format[i], 1); /* &format[i] because "write" takes pointer to character argument */
count = count + value;
i++;
continue;
}
if (format[i] == '%')
{
f = check_specifier(&format[i + 1]);
if (f != NULL)
{
value = f(vl);
count = count + value;
i = i + 2;
continue;
}
if (format[i + 1] == '\0')
{
break;
}
if (format[i + 1] != '\0')
{
value = write(1, &format[i + 1], 1);
count = count + value;
i = i + 2;
continue;
}
}
}
return (count);
}
