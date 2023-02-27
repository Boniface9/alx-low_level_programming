#include <stdio.h>
#include "main.h"

/**
 * store the starting address of dest
 * copy each character from src to dest until we reach the null terminator
 * add the null terminator to the end of dest
 */
char* copy_string(char* dest, const char* src)
{
char* dest_start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return dest_start;
}
