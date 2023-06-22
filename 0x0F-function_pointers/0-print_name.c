#include <stdio.h>

/*
 * print_name - prints the name using a given function
 * @name: the name to be printed
 * @f: pointer to the function that prints the name
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}
