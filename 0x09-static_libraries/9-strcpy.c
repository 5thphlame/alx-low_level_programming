#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by the pointer 'src' to
 * the buffer pointed to the 'dest'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}