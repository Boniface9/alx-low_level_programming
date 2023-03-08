#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the natural square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have
 *         a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
int low = 0, high = n, mid = 0;
while (low <= high) {
mid = (low + high) / 2;
if (mid * mid == n)
return (mid);
if (mid * mid < n)
low = mid + 1;
else
high = mid - 1;
}
return (_sqrt_recursion(n - 1));
}
