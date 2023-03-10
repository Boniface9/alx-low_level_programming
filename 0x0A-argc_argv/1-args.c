#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
(void)argv; /* to avoid unused variable warning */
printf("%d\n", argc - 1); /* print the number of arguments minus one */
return (0);
}
