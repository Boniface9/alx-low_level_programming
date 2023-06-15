#include <stdio.h>
#include <stdlib.h>

/* This program multiplies two positive numbers.
 *
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not, print Error,
 * followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 * You can use bc (man bc) to check your results.
 */

int isNumber(char *str);
int _strlen(char *str);
void multiply(char *num1, char *num2);
int main(int argc, char *argv[]) {
char *num1;
char *num2;
if (argc != 3) {
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
if (!isNumber(num1) || !isNumber(num2)) {
printf("Error\n");
return (98);
}
multiply(num1, num2);
return (0);
}
int isNumber(char *str) {
int i = 0;
while (str[i] != '\0') {
if (str[i] < '0' || str[i] > '9') {
return (0);
}
i++;
}
return (1);
}
int _strlen(char *str) {
int len = 0;
while (str[len] != '\0') {
len++;
}
return (len);
}
void multiply(char *num1, char *num2) {
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int lenResult = len1 + len2;
int *result = calloc(lenResult, sizeof(int));
int i, j;
int start = 0; /* Move the declaration here */
for (i = len1 - 1; i >= 0; i--) {
for (j = len2 - 1; j >= 0; j--) {
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
while (start < lenResult && result[start] == 0) {
start++;
}
if (start == lenResult) {
printf("0\n");
}
else{
for (i = start; i < lenResult; i++) {
printf("%d", result[i]);
}
printf("\n");
}
free(result);
}
