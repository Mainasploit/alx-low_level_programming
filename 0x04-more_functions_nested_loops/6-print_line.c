#include "main.h"

/**
 * print_line - functions that draws a straight line
 *
 * @n: function paramter
 */

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
		_putchar('_');
	_putchar('\n');
}
