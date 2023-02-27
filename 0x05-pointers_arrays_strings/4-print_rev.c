#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
