#include "main.h"

/**
 *  print_sign - sign of a number
 *
 *  @n: character to be checked
 *
 *  Return: 1 positive, -1 negative, 0 is zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
