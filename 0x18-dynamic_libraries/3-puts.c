#include <unistd.h>
#include <stdio.h>
#include <string.h>
void _puts(char *s)
{
while (*s != '\0')
{
putchar(*s);
s++;
}
putchar('\n');
}

