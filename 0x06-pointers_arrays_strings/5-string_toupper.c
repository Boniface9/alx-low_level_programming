#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to a string
 *
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
char *s = str;
while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
{
*s -= 32;
}
s++;
}
return (str);
}
