#include "main.h"
/**
 * _sqrt_recursion - sqr root finder
 * @n: number
 * @c: ne
 * Return: sqr root
 *
 */
int _sqrtcheck(int n, int c);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		return (_sqrtcheck(n, 1));
	return (0);
}
/**
 * _sqrtcheck - checks root
 * @n:number
 * @c:root to try
 * Return:root
 */

int _sqrtcheck(int n, int c)
{
	if (n == c * c)
		return (c);
	if (c >= (n / 2))
		return (-1);
	return (_sqrtcheck(n, c + 1));
}
