#include <stdio.h>
#include "main.h"
/**
 * print_line - Entry point
 * @n: number of times  the character _ should be printed
 * Description: A function that draws a straight line on terminal
 * Return: Nothing
 */
void print_line(int n)
{
int a;
for (a = 0; a < n; a++)
putchar('_');
putchar('\n');
}
