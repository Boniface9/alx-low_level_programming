#include  <stdio.h>
#include "main.h"
/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (n % i == 0 && i != n)
return (0);
else if (i == n)
return (1);
return (check_prime(n, i + 1));
}
