#include <stdlib.h>
#include <time.h>
#include "_putchar.c"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		_putchar ('+');
	}
	else if (n < 0)
	{
	_putchar ('-');
	}
	else
	{
	_putchar ('0');
	}
	return (0);
}

