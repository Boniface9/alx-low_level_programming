#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (!ptr)
{
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
return (new_ptr);
}
if (!new_size && ptr)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
old_ptr = ptr;
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = old_ptr[i];
free(ptr);
return (new_ptr);
}
