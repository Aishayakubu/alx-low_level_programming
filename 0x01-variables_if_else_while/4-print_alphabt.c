#include <stdio.h>
#include "_putchar.c"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
char c;
for (c = 97; c <= 122; c++)
{
if (c != 101 && c != 113)
{
_putchar(c);
}
}
_putchar('\n');
return (0);
}
