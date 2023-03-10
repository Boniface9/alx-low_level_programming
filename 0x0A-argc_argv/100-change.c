#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int cents, coins;
if (argc != 2) /* check if the number of arguments is correct */
{
printf("Error\n"); /* print error message */
return (1); /* return 1 to indicate error */
}
cents = atoi(argv[1]); /* convert the argument to an integer */
coins = 0;
if (cents > 0) /* check if the amount is positive */
{
coins += cents / 25; /* add the number of quarters */
cents %= 25; /* update the remaining cents */
coins += cents / 10; /* add the number of dimes */
cents %= 10; /* update the remaining cents */
coins += cents / 5; /* add the number of nickels */
cents %= 5; /* update the remaining cents */
coins += cents / 2; /* add the number of pennies */
cents %= 2; /* update the remaining cents */
coins += cents; /* add any leftover cent */
}
printf("%d\n", coins); /* print the minimum number of coins */
return (0); /* return 0 to indicate success */ 
}
