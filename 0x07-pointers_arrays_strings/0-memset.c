#include "main.h"

/**
 * _memset - sets memory in buffer to b
 * @s: buffer to be changed
 * @b: char to be set
 * @n: number of spaces to be changed
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n))
	{
		s[i] = b;
		i++;
	}

	return (s);
}