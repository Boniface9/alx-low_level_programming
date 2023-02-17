#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char letter = 'a';
/*Print lowercase alphabet*/
while (letter <= 'z') {
putchar(letter);
letter++;
}
/*Reset letter to 'A'*/
letter = 'A';
/*Print uppercase alphabet*/
while (letter <= 'Z') {
putchar(letter);
letter++;
}
/*Print newline character*/
putchar('\n');
return (0);
}
