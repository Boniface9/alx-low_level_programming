#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
int i;
for (str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
