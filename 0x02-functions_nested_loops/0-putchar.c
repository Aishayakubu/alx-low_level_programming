#include <stdio.h>
#include "main.h"
/**
 * main - A program that print _putchar
 *
 * Return: success
 */
int main(void)
{
char str[] = "_putchar\n";
int a;

for (a = 0; a < 8; a++)
{
_putchar(str[a]);
}
return (0);
}
