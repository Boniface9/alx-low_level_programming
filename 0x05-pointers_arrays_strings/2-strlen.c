#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
