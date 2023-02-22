#include "main.h"
#include <stdio.h>
/**
 *Adds two integers and returns the result
 *@param a The first integer to add
 *@param b The second integer to add
 *@return The sum of a and b
*/
int add(int a, int b)
{
return a + b;
}
int main()
{
int x = 5;
int y = 10;
int z = add(x, y);
printf("%d + %d = %d\n", x, y, z);
return 0;
}
