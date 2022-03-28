#include "main.h"

/**
 * _memcpy - copies src to dest
 * @dest: destination
 * @src: source to copy
 * @n: number of chars to copy
 * Return: returns destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}