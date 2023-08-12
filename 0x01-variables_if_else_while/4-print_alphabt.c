#include <stdio.h>
/**
 * main - entry point
 * Description@ A program that prints lowercase alphabets excluding q and e
 * Return: 0 if successful
 */
int main(void)
{
char i;
for (i = 97; i < 123; i++)
{
if (i == 101 || i == 113)
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
