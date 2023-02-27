#include <stdio.h>
#include "_putchar.c"
/**
 * main - entry point
 *
 *Return: 0
 */
int main(void)
{
char c;
for (c = 97; c <= 122; c++)
{
_putchar(c);
}
for (c = 65; c <= 90; c++)
{
_putchar(c);
}
_putchar(0);
return (0);
}
