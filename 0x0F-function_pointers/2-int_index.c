#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first non-zero comparison
 * result, or -1 if no match or invalid size.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
