#include "main.h"

/**
 * print_alphabet_x10 - function to be created
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int a;

	for (a = 1 ; a <= 10 ; a++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}

}
