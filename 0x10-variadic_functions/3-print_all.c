#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @valist: A va_list containing the character to print.
 */
void print_char(va_list valist)
{
printf("%c", va_arg(valist, int));
}

/**
 * print_int - Prints an integer.
 * @valist: A va_list containing the integer to print.
 */
void print_int(va_list valist)
{
printf("%d", va_arg(valist, int));
}

/**
 * print_float - Prints a float.
 * @valist: A va_list containing the float to print.
 */
void print_float(va_list valist)
{
printf("%f", va_arg(valist, double));
}

/**
 * print_string - Prints a string.
 * @valist: A va_list containing the string to print.
 */
void print_string(va_list valist)
{
char *s = va_arg(valist, char *);
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}

/**
 * print_all - Prints anything.
 * @format: A string of format specifiers.
 */
void print_all(const char * const format, ...)
{
va_list valist;
int i = 0, j = 0;
char *separator = "";
print_t print[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_start(valist, format);
while (format && format[i])
{
j = 0;
while (print[j].symbol)
{
if (print[j].symbol == format[i])
{
printf("%s", separator);
print[j].print_type(valist);
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(valist);
}
