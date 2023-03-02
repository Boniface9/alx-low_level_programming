#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
int i, j;
char *s = str;
char *encoded = str;
while (*s)
{
if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
{
*encoded = *s + 13;
}
else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
{
*encoded = *s - 13;
}
s++;
encoded++;
}
return (str);
}
