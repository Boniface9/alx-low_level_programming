#include <stdio.h>
#include <string.h>
char *_strcpy(char *dest, char *src)
{
char *saved_dest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (saved_dest);
}
