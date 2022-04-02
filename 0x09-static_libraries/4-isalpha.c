#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: c is an ascii character
 * Return: 1 if c is a letter otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}