#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
return (n < 0 ? -n : n);
}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
int n = -42;
int abs_n = _abs(n);
printf("The absolute value of %d is %d\n", n, abs_n);
return (0);
}
