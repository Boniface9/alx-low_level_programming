#include <stdio.h>
#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to the string to be changed
 * @to: pointer to the string to be copied
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
*s = to;
}
