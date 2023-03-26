#include "main.h"
/**
 * check_specifier - Checks for a valid character specifier and assigns a valid function.
 * @format: The type of specifier (char*)
 * Return: Returns a pointer to a function if success
 * NULL pointer if failed
 */
int (*check_specifier(const char *format))(va_list)
{
int i = 0;
func_s my_array[4] = {
{"c", print_char},
{"s", print_str},
{"%", print_cent},
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
