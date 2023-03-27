#include "main.h"
int convert_hex(unsigned int x);
/**
 * print_adr - prints the adress or pointer
 * @vl: variadic list
 * Return: the lenght of the output
 */

int print_adr(va_list vl)
{
void *p;
unsigned int a, ha; /* will use to convert to hexadicimal (output)*/
int i;
char *nil = "(nil)"; /*if p null*/
p = va_arg(vl, void*);
if (p == NULL)
{
for(i = 0; nil[i] != '\0'; i++)
_putchar(nil[i]);
return (i); /*nil lenght*/
}
a = (unsigned int)p;
_putchar('0');
_putchar('x');
ha = convert_hex(a);
return (ha + 2); /* add 2 for 0 and x */
}
/**
 * convert_hex - converts to hexadecimal
 * @x: the number to convert
 * Return: the lenght of the output
 */
int convert_hex(unsigned int x)
{
unsigned int *arr;
int i;
unsigned int len = 0, n = x;
while (n != 0)
{
n /= 16;
len++;
}
arr = malloc(sizeof(unsigned int) * len);
for (i = 0; i < len; i++)
{
arr[i] = x % 16;
x /= 16;
}
for (i = len - 1; i >= 0; i--)
{
if (arr[i] >= 10)
arr[i] = arr[i] + 39;
_putchar('0' + arr[i]);
}
free(arr);
return (len);
}
