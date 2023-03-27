#include "main.h"
/**
 * print_cent - prints %%
 * @vl: variadic list
 * Return: 1
 */
int print_cent(va_list vl)
{
(void)vl;
write(1, "%", 1);
return (1);
}
