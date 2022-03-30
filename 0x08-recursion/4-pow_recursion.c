#include "main.h"
/**
 * _pow_recursion - does some pow
 * @x:base
 * @y:exponent
 * Return: pow or -1 for fail
 *
 *
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (0);
}
