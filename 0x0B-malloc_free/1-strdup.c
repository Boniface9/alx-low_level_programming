#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to copy.
 *
 * Return: If str == NULL or memory allocation fails, NULL.
 *         Otherwise, a pointer to the new copy of the string.
 */
char *_strdup(char *str)
{
char *copy;
unsigned int len = 0, i;
if (str == NULL)
return (NULL);
while (str[len])
len++;
copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);
for (i = 0; i <= len; i++)
copy[i] = str[i];
return (copy);
}
