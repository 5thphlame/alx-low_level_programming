#include "main.h"
/**
 * _strcat - concanates string
 * @dest: destination string
 * @src: source strin
 * Return: concanated string
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, scount;

	scount = 0;
	i = _strlen(dest);

	while (src[scount] != '\0')
	{
		dest[i] = src[scount];
		scount++;
		i++;
	}
	return (dest);
}

/**
 * _strlen - messures string
 * @str: string to messures
 * Return: lenght
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
