#include <stdio.h>
/**
 * swap_int - entry point
 * @a: first integer
 * @b:second integer
 * return: 0
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
