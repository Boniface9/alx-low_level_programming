#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 *
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0, i, start;
while (*(str + len) != '\0')
len++;
start = len % 2 == 0 ? len / 2 : (len + 1) / 2;
for (i = start; i < len; i++)
putchar(*(str + i));
putchar('\n');
}
