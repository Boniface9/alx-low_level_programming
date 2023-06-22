#include <stdio.h>

/**
 * print_name: prints a name using a given function
 * @name: the name to be printed
 * @f: pointer to the function that prints the name
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
if(name && f)
{
f(name);
}
}
