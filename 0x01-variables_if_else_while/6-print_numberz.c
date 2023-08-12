#include <stdio.h>
/**
 * main - entry point
 * Description@ A program that prints single numbers from base 10
 * Return: 0 if successful
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
