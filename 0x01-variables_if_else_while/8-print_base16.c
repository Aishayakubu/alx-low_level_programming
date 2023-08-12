#include <stdio.h>
/**
 * main - Entry point
 * Description@ A program that prints numbers of base 10
 * Return: 0 if successful
 */
int main(void)
{
int i;
char j;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (j = 97; j < 103; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
