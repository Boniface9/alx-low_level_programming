#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++) /* loop through all arguments */
{
printf("%s\n", argv[i]); /* print each argument */
}
return (0);
}
