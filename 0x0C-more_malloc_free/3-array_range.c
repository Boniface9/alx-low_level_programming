#include <stdlib.h>
#include <atdio.h>
#include "main.h"

int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
return NULL;
size = max - min + 1;
arr = malloc(size * sizeof(int));
if (!arr)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
