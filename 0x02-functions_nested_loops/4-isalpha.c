#include "main.h"

/**
 *_isalpha - check alphabet
 *
 *@c: character to be checked
 *
 *Return: 1
 */

int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{

return (1);

}

return (0);

}
