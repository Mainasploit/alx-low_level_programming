#include "main.h"
#include <stdio.h>
/**
 * _abs - function to get absolute value
 *
 * @a: function parameter
 *
 * Return: Always 0
 *
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a > 0)
		return (a);
	else
		return (a);
}
