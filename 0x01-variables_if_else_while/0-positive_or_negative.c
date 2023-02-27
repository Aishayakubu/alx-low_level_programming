#include <stdlib.h>
#include <time.h>

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
	return (n);
	}
	else if (n < 0)
	{
	return (-n);
	}
	else
	{
	return (0);
	}
}

