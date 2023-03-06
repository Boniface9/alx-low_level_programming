#include <stdio.h>
#include "main.h"
/*
 * _strchr - Find the first occurrence
 * of a character in a string
 * @s: A pointer to the string to search
 * @c: The character to search for
 * Returns: A pointer to the first occurrence
 * of @c in @s, or NULL if @c is
 * not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
