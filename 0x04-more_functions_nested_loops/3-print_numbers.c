#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 * Description@ print numbers from 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
}
