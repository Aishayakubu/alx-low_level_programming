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
for (dest = 0; *dest != '\0'; dest++)

for (src = 0; *src != '\0'; src++)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (p);
}
