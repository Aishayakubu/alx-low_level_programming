#include <stdio.h>
/**
 * main - Entry point
 * Description@ print single numbers, each preceded by ", "
 * Return: 0 if successful
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
