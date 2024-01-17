#include <stdio.h>
#include <string.h>
int _atoi(char *s)
{
int sign = 1;
int result = 0;
while (*s != '\0')
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
result *= 10;
result += *s - '0';
}
else if (result > 0)
break;
s++;
}
return (result * sign);
}
