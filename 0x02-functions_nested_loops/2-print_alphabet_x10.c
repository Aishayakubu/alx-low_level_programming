#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description@ prints 10x the alphabet in lowercase
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 97; j < 123; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
