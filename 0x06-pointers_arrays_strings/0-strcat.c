#include <string.h>
#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
char *p = dest + strlen(dest);
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
  return (dest);
}
