#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
