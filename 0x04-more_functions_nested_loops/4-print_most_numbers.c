#include "main.h"

/**
 * print_most_numbers - print numbers from 0 ot 9 followed
 * by a new line but do not print 2 and 4.
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i =0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
