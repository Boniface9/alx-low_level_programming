#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a function pointer to a function that takes an int parameter
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array && action)
    {
        size_t i;
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
