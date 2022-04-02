#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @c: character to check for occurence
 * @s: string pointed to by the argument
 * Return: pointer to the first occurence or NULL
 */
char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; *(s + i) != '\0'; i++)
if (*(s + i) == c)
return (s + i);
if (*(s + i) == c)
return (s + i);
return ('\0');
}