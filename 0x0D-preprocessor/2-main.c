#include <stdio.h>

/*
 * FILENAME: 2-main.c
 *
 * DESCRIPTION:
 * This program prints the name of the file
 * it was compiled from using the __FILE__ macro.
 */

int main(void)
{
    printf("%s\n", __FILE__);
    return 0;
}
