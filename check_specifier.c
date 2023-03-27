#include "main.h"
/**
 * check_specifier - Checks for a valid char specifier and assigns valid func
 * @format: The type of specifier (char*)
 * Return: Returns a pointer to a function if success
 * NULL pointer if failed
 */
int (*check_specifier(const char *format))(va_list)
{
int i = 0;
func_s my_array[13] = {
{"c", print_char},
{"s", print_str},
{"%", print_cent},
{"d", print_dec},
{"i", print_int},
{"b", print_bin},
{"u", print_u_i},
{"o", print_oct},
{"x", print_hex},
{"X", print_HEX},
{"p", print_adr},
{"r", print_rev},
{NULL, NULL}
};
for (i = 0; my_array[i].s != NULL; i++)
{
if (*(my_array[i].s) == *format)
{
return (my_array[i].f);
}
}
return (NULL);
}
