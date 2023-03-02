#include <stdio.h>
#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: string to be modified
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
}
else if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
}
i++;
}
return (s);
}
