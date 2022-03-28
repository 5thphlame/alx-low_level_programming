#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to check
 * @accept: substring
 * Return: count
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i1, i2, rcount, c;

	i1 = 0;
	i2 = 0;
	rcount = 0;
	while (s[i1] != '\0')
	{
		c = 0;
		while (accept[i2] != '\0')
		{
			if (accept[i2] == s[i1])
			{
				rcount++;
				c++;
			}
			i2++;
		}
		if (c == 0)
			break;
		i1++;
		i2 = 0;
	}
	return (rcount);
}