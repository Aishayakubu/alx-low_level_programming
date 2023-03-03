#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two string
 * @dest: first string
 * @src: second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p);
}
