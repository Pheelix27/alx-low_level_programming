#include "main.h"

/**
 * print_diagonal - printing lines that are diagonal
 * @n: input variable, that is, numbers of lines to be printed
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
