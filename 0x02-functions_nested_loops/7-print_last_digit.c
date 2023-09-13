#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function to be the last digit of a number
 *
 * @a: parameter to be entered
 *
 *
 * Return: Always 0
 *
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
