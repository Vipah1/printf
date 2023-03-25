#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_percentage(void);
int print_char(va_list vl);
int print_str(va_list vl);
int print_int(va_list vl);
int print_dec(va_list vl);


/**
 * struct format - finds the right specifier
 * @s: the specifier
 * @f: function associated to s
 */
typedef struct format
{
	char *s;
	int (*f)(va_list);
} conver_specifier;

#endif