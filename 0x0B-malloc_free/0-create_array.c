#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 *and initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize array with chars
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
if (size == 0)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
arr[size] = '\0';
return (arr);
}
