#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 * @c: character to check
 * Description: check for digit
 * Return: 1 if successful, otherwise 0
 */
int _isdigit(int c)
{
if (48 <= c && 58 >= c)
{
	return (1);
}
else
{
	return (0);
}
}
