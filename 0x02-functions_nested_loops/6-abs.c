#include "main.h"
/**
 *_abs - entry point
 *
 * @n: character to be checked
 * Return: n if positive, -n if negative, 0 if otherwise
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-n);
}
else
{
return (0);
}
}
