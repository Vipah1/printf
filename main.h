#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_cent(va_list vl);
int print_char(va_list vl);
int print_str(va_list vl);
int print_int(va_list vl);
int print_dec(va_list vl);
int print_bin(va_list vl);
int print_u_i(va_list vl);
int print_oct(va_list vl);
int print_hex(va_list vl);
int print_HEX(va_list vl);
int print_adr(va_list vl);
int print_rev(va_list vl);

/**
 * struct func - finds the right specifier
 * @s: the specifier
 * @f: function associated to s
 */
typedef struct func
{
char *s;
int (*f)(va_list);
} func_s;

#endif
