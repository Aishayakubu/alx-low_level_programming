#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description@ A function that prints alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
char i;
for (i = 97; i < 123; i++)
{
_putchar(i);
}
putchar('\n');
}
