#include "main.h"

/**
 * print_sign - show 1 and prints + if n is greater than zero,
 * show 0 and prints 0 if n is zero
 * show -1 and prints - if n is less than zero
 *
 * @n: The input number as an integer
 *
 * Return: 1 if greater than zero, 0 if it is zero
 * and -1 if it is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
	_putchar('\n');
}
