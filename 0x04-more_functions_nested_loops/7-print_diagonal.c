#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 * Description: A function that draws diagonal on the terminal
 * @n: length of line
 * Return: Nothing
 */
void print_diagonal(int n)
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
putchar(' ');
putchar('\\');
putchar('\n');
}
if (n <= 0)
putchar('\n');
}
