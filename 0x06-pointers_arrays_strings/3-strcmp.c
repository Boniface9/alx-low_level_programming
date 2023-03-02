#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer <, ==, or > 0 if s1 is found,
 * respectively, to be less than, to match, or be > s2.
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (s1[i] - s2[i]);
}
