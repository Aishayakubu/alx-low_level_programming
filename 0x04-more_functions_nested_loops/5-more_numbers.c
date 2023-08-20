#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 * Description@ print numbers from 0 to 14 x10
 * Return: Nothing
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j / 10 != 0)
{
putchar(j / 10 + '0');
}
putchar(j % 10 + '0');
}
putchar('\n');
}
}
