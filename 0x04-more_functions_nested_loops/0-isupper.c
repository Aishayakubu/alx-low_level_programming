#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entrypoint
 * @c: character to be checked
 * Description: check for uppercase characters
 * Return: 1 if successful, otherwise 0
 */
int _isupper(int c)
{
if ('A' <= c && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
