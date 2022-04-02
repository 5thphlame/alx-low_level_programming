#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: pointer to char param
 * @src: pointer to char param
 * @n: integer param
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}