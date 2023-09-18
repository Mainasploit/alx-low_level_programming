#include "main.h"

/**
 * puts_half - function to print half of string
 * @str: function parameter
 * Return: always 0
 */


void puts_half(char *str)
{
	int i;
	int j = 0;
	int len = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		len = i++;
	}
	if (len % 2 != 0)
	{
		int n;

		n = (len - 1) / 2;
		_putchar(n);
	}
	else
	{
		for (j = (len / 2) + 1 ; str[j] != '\0' ; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
}
