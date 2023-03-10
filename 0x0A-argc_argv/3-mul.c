#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int a, b, product;
if (argc != 3) /* check if the number of arguments is correct */
{
printf("Error\n"); /* print error message */
return (1); /* return 1 to indicate error */
}
a = atoi(argv[1]); /* convert the first argument to an integer */
b = atoi(argv[2]); /* convert the second argument to an integer */
product = a * b; /* calculate the product of the two numbers */
printf("%d\n", product); /* print the product */
return (0); /* return 0 to indicate success */
}
