#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
(void)argc; /* to avoid unused variable warning */
printf("%s\n", argv[0]); /* print the first argument */
return (0);
}
