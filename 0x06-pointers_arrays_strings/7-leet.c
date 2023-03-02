#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to a string
 *
 * Return: pointer to the string
 */
char *leet(char *s)
{
int i = 0, j;
char letter[] = "aeotlAEOTL";
char code[] = "4307104307";
while (s[i] != '\0')
{
j = 0;
while (letter[j] != '\0')
{
if (s[i] == letter[j])
s[i] = code[j];
j++;
}
i++;
}
return (s);
}
