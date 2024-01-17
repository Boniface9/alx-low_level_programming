#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
