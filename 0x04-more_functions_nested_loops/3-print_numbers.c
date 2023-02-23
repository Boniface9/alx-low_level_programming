#include "main.h"
/**
 * print_numbers - Prints the numbers 0-9 followed by a new line
 *
 * Description: This function uses _putchar to print each digit from 0 to 9,
 * followed by a new line character. The _putchar function can only be used twice.
 * 
 * Return: void
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
