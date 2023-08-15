#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * Description@ Check for alphabetic character
 * @c: character to check
 * Return: 1 if successful, otherwise 0
 */
int _isalpha(int c)
{
if ('a' <= c && c <= 'z')
{
return (1);
}
else if ('A' <= c && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
