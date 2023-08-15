#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 * @a: integer to check
 * Description@ computes the absolute value of an integer
 * Return: 0 if successful
 */
int _abs(int a)
{
if (a > 0)
{
return (a);
}
else if (a < 0)
{
return (-a);
}
else
{
return (0);
}
}
