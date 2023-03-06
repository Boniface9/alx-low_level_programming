#include <stdio.h>
#include "main.h"
/*
 * _memcpy-Copies `n` bytes from `src` to `dest`.
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory
 * @n: number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
