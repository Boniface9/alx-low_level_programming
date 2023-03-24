#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
f(name);
}
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}
