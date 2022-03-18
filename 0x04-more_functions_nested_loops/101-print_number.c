#include "holberton.h"

/**
 * print_number - print an integer using putchar
 *
 * @n: integer to print
 *
 * Return: Void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}

	if (x / 10)
		print_number(x / 10);

	_putchar('0' + (x % 10));
}
