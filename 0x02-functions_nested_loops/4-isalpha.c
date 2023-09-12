#include "main.h"

/**
 * _isalpha - function to be created
 *
 * @c: function parameter
 *
 * Return: Always 0
 *
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
