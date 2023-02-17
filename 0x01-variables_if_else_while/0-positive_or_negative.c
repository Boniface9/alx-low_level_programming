#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{int n;
srand(time(NULL)); /* Do not touch this code*/
n = rand() - RAND_MAX / 2; /*Do not touch this code*/
printf("%d ", n);
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else {printf("is negative\n");
return 0;
}
