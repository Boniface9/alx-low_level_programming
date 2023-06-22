#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
  int a, b, result;
  int (*op_func)(int, int);
  int (*get_op_func(char *s))(int, int);
  if (argc != 4)
  {
    printf("Error\n");
    return (98);
  }

  a = atoi(argv[1]);
  b = atoi(argv[3]);
  op_func = get_op_func(argv[2]);

  if (op_func == NULL)
  {
    printf("Error\n");
    return (99);
  }

  result = op_func(a, b);
  printf("%d\n", result);

  return (0);
}
