#include <stdio.h>
/**
 * main - prints all possible combination of single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
