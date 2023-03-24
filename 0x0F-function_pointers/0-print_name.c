#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
f(name);
}
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
}

int main(void)
{
print_name("Alice", print_name_as_is);
print_name("Bob", print_name_uppercase);
return (0);
}
