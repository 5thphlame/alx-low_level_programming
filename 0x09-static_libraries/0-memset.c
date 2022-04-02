#include "main.h"
#include <string.h>

/**
 * _memset - this function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the block of memory to fill
 * @b: this is the value to be set.
 * @n: this is the number of bytes to set to the value
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);

return (s);
}