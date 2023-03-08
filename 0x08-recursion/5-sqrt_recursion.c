#include <stdio.h>
#include "main.h"

/**
 * _sqrt - find the square root of a number using binary search
 * @low: the lowest possible square root
 * @high: the highest possible square root
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt(int low, int high, int n)
{
int mid;
if (low <= high)
{
mid = (low + high) / 2;
if (mid *mid == n)
return (mid);
else if (mid *mid < n)
return (_sqrt(mid + 1, high, n));
else
return (_sqrt(low, mid - 1, n));
}
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(0, n, n));
}
