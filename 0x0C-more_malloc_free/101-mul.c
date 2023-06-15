#include <stdio.h>
#include <stdlib.h>

/*
* This C program takes two numbers as input
* and validates their format.
* It expects exactly two arguments and
* checks if they are valid numbers.
* If either argument is not a valid number,
* the program terminates with
* an error message. If both arguments
* are valid numbers, the program 
* performs the multiplication operation
* but does not display or store 
* the result. Finally, the program
* exits with a return value of 0.
*/
int isNumber(char *str);
int _strlen(char *str);
void multiply(char *num1, char *num2);
int main(int argc, char *argv[])
{
char *num1;
char *num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
if (!isNumber(num1) || !isNumber(num2))
{
printf("Error\n");
return (98);
}
multiply(num1, num2);
return (0);
}

int isNumber(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
{
return (0);
}
i++;
}
return (1);
}
int _strlen(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}

/*
 * Description: Function to multiply two numbers.
 *
 * Parameters:
 * - num1: First number to be multiplied.
 * - num2: Second number to be multiplied.
 *
 * Note: The numbers should be passed as strings.
 */
void multiply(char *num1, char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int lenResult = len1 + len2;
int *result = calloc(lenResult, sizeof(int));
int i, j;
int start = 0;
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int n1 = num1[i] - '0';
int n2 = num2[j] - '0';
int product = n1 * n2;
int pos1 = i + j;
int pos2 = i + j + 1;
int sum = product + result[pos2];
result[pos2] = sum % 10;
result[pos1] += sum / 10;
}
}
while (start < lenResult && result[start] == 0)
{
start++;
}
if (start == lenResult)
{
printf("0\n");
}
else
{
for (i = start; i < lenResult; i++)
{
printf("%d", result[i]);
}
printf("\n");
}
free(result);
}
