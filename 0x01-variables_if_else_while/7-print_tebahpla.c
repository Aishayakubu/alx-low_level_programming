#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int i;
for (i = 'z'; i > 'a' - 1; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
