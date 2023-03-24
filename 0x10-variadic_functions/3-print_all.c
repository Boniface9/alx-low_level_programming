#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @valist: The va_list
 */
void print_char(va_list valist)
{
printf("%c", va_arg(valist, int));
}

/**
 * print_int - Prints an int
 * @valist: The va_list
 */
void print_int(va_list valist)
{
printf("%d", va_arg(valist, int));
}

/**
 * print_float - Prints a float
 * @valist: The va_list
 */
void print_float(va_list valist)
{
printf("%f", va_arg(valist, double));
}

/**
 * print_string - Prints a string
 * @valist: The va_list
 */
void print_string(va_list valist)
{
char *str;
str = va_arg(valist, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: The format string
 */
void print_all(const char * const format, ...)
{
va_list valist;
int i, j;
char *separator = "";
print_t print[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_start(valist, format);
i = 0;
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
