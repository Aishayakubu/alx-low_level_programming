#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * @c: character to check
 * Description @ check if alphabet is lowercase
 * Return: 1 if successful otherwise 0
 */
int _islower(int c)
{
if ('a' <= c && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
