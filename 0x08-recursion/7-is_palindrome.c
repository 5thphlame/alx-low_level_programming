#include "main.h"
int palcheck(char *c, int len, int i);
/**
 * is_palindrome - calls funcions to check length then check if palindorme
 * @s:string
 * Return:1 if palindorme 0 if not
 *
 *
 */
int is_palindrome(char *s)
{
	int l, i;

	i = 0;
	l =  _strlen_recursion(s);

	return (palcheck(s, l, i));
}

/**
 * palcheck - check if palindorme
 * @c:string
 * @len: length of string
 * @i: index
 * Return:1 if palindorme 0 if not
 */
int palcheck(char *c, int len, int i)
{
	if (c[i] == c[len / 2])
	{
		return (1);
	}
	if (c[i] == c[len - i - 1])
	{
		return (palcheck(c, len, i + 1));
	}
	return (0);
}
/**
 * _strlen_recursion - messurse string
 * @s:string to messure
 * Return:length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}
