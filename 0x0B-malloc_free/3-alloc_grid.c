#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: Pointer to the duplicated string, NULL if str is NULL or if memory
 *         allocation fails
 */

char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i, j;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
result = malloc((len1 + len2 + 1) * sizeof(char));
if (result == NULL)
return NULL;
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < len2; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
return (result);
}
