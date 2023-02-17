#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This function prints whether a randomly generated number is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void) /* Do not touch this code*/
{int n;
srand(time(NULL)); /* Do not touch this code*/
n = rand() - RAND_MAX / 2; /*Do not touch this code*/
printf("%d ", n);
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}
