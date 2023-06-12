#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 *and initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize array with chars
 * Return: pointer to the array, or NULL if it fails
 */
/*char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(size *sizeof(char));
if (arr == NULL)
return NULL;
for (i = 0; i < size; i++)
arr[i] = c;
return arr;
}*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return NULL;
char *arr = malloc((size + 1) * sizeof(char));
if (arr == NULL)
return NULL;
for (unsigned int i = 0; i < size; i++)
arr[i] = c;
arr[size] = '\0';
return (arr);
}
