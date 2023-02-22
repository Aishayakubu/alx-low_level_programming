#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * return: 0 (success)
 */
void print_alphabet_x10(void)
{
char alpha;
int i = 0;

while (i <= 9)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}

_putchar('\n');

i++;

}
}
