#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @a:integer to check
 * Description: print the last digit of a number
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
int i;
if (a < 0)
i = -1 * (a % 10);
else
i = a % 10;
_putchar(i + '0');
return (i);
}
