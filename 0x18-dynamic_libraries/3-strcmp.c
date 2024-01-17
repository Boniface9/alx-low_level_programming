#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Return: negative value if s1 is less than s2, positive value if s1 is greater
 *         than s2, and 0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
return (s1[i] - s2[i]);
}
