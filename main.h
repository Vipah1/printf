#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_percentage(void);
int print_char(va_list vl);
int print_str(va_list vl);
int print_int(va_list vl);
int print_dec(va_list vl);
int print_bin(va_list vl);
int print_u_i(va_list vl);
int print_oct(va_list vl);
int print_hex(va_list vl);
int print_HEX(va_list vl);

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
