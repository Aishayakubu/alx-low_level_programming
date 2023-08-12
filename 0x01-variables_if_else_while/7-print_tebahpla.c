#include <stdio.h>
/**
 * main - Entry point
 * Description@ A program that prints lowercase alphabets in reverse
 * Return: 0 if successful
 */
int main(void)
{
char i;
for (i = 122; i > 96; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
