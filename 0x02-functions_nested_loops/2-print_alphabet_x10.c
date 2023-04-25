#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

