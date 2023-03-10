#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int i, j, sum;
sum = 0;
for (i = 1; i < argc; i++) /* loop through all arguments */
{
for (j = 0; argv[i][j] != '\0'; j++) /* loop through each character */
{
if (!isdigit(argv[i][j])) /* check if the character is not a digit */
{
printf("Error\n"); /* print error message */
return (1); /* return 1 to indicate error */
}
}
sum += atoi(argv[i]); /* convert the argument to an integer and add it to the sum */
}
printf("%d\n", sum); /* print the sum */
return (0); /* return 0 to indicate success */
}
