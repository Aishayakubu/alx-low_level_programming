#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 * Description: A function that prints square
 * @n: size of square
 * Return: Nothing
 */
void print_square(int n)
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
putchar('#');
putchar('\n');
}
{
if (n <= 0)
putchar('\n');
}
}
