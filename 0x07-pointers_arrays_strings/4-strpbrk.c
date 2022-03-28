#include "main.h"
/**
 * _strpbrk - gets length of a prefix substring
 * @s: string to check
 * @accept: substring
 * Return: count
 *
 */
char  *_strpbrk(char *s, char *accept)
{
	int i1, i2;

	i1 = 0;
	i2 = 0;
	while (s[i1] != '\0')
	{
		while (accept[i2] != '\0')
		{
			if (accept[i2] == s[i1])
				return (s + i1);
			i2++;
		}
		i1++;
		i2 = 0;
	}
	return ('\0');
}