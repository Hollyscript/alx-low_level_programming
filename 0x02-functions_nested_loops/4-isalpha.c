#include "main.h"
/**
 *  _isalpha - print 1 if c is a letter, lowercase or uppercase,
 * show 0 otherwise
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if it is an alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
