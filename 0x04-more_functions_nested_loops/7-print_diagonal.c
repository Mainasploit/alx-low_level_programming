#include "main.h"

/**
 * print_diagonal - function that draws diagonal line
 *
 * @n: function parameter
 *
 */

void print_diagonal(int n)
{
	int i;

	if (n != 0 || n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
