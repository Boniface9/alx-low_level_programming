#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
char *concat;
unsigned int len1 = 0, len2 = 0;
if (s1 != NULL)
len1 = strlen(s1);
if (s2 != NULL)
len2 = strlen(s2);
if (n >= len2)
n = len2;
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);
if (s1 != NULL)
strcpy(concat, s1);
strncat(concat, s2, n);
return (concat);
}
