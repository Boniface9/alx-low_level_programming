#include <stdlib.h>
#include <atdio.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * from min to max, inclusive
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Return: If min > max or if malloc fails, return NULL.
 * Otherwise, return a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *array;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = min + i;
return (array);
}
