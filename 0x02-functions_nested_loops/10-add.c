#include "main.h"
#include <stdio.h>

int add(int a, int b);
int main()
{
int x = 5;
int y = 10;
int z = add(x, y);
printf("%d + %d = %d\n", x, y, z);
return 0;
}
