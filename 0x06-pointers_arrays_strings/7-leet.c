#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char *leet_chars = "aAeEoOtTlL";
char *leet_subs = "4433007711";
for (i = 0; str[i]; i++)
{
for (j = 0; leet_chars[j]; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_subs[j];
break;
}
}
}
return (str);
}
