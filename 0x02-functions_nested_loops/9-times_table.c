#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 * Description@ A function that prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
int i;
int j;
int r;
for (i = 0; i < 10; i++)
{
_putchar('0');
_putchar(',');
r = i;
for (j = 1; j < 10; j++)
{
_putchar(' ');
if (r / 10 == 0)
{
_putchar(' ');
}
else
{
_putchar(r / 10 + '0');
}
_putchar(r % 10 + '0');
if (j != 9)
{
_putchar(',');
}
r = r + i;
}
_putchar('\n');
}
}
