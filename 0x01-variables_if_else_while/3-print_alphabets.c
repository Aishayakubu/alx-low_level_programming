#include <stdio.h>
/**
 * main - entry point
 * Description@ A program that prints letters in lower and upper case
 * Return: 0 if successful
 */
int main(void)
{
char i;
char j;

for (i = 97; i < 123; i++)
{
putchar(i);
}
for (j = 65; j < 91; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
