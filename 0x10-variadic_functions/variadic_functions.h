#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formatfunc - matches single-character string with related function
 *
 * @s: single-charater string
 * @f: associated function
 */
struct formatfunc
{
	char *s;
	void (*f)(va_list);
}

void return_c(va_list);
void return_i(va_list);
void return_f(va_list);
void return_s(va_list);
#endif
