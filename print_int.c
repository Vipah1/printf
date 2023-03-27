#include "main.h"
/**
 * print_int - prints integers
 * @vl: variadic list
 * Return: output lenght
 */
int print_int(va_list vl)
{
int i = 0;
int count = 0;
int numb;
int my_arr[10];
char x[1];
/* Fetch integer from variadic list */
numb = va_arg(vl, int);
/* Break numbers apart and assign to array */
while (numb != 0)
{
my_arr[i] = (numb % 10);
numb = numb / 10;
if (numb == 0)
{
break;
}
else
{
i++;
}
}
 /* write content of array */
for (i; i >= 0; i++)
{
x[0] = ('0' + my_arr[i]); /* convert int to char*/
count += write(1, x, 1);
}
return (count);
}
