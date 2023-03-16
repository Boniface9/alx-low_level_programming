#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, len;
char *new_str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
len = len1 + n;
new_str = malloc(len + 1);
if (new_str == NULL)
return (NULL);
memcpy(new_str, s1, len1);
memcpy(new_str + len1, s2, n);
new_str[len] = '\0';
return (new_str);
}
