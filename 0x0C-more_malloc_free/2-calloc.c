#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc and sets the memory to
 *           zero.
 * @nmemb: The number of elements in the array to be allocated.
 * @size: The size of the elements in the array.
 *
 * Return: If nmemb or size is 0 - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
mem = malloc(nmemb * size);
if (mem == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
mem[i] = 0;
return (mem);
}
