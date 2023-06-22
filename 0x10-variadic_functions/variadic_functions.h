#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _print_char(va_list *args);
void _print_integer(va_list *args);
void _print_float(va_list *args);
void _print_string(va_list *args);
#endif /* VARIADIC_FUNCTIONS_H */
