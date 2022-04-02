#include "main.h"
/**
 * _islower - prints 1 or 0 depending on input
 * @c: first parameter
 *
 * Description: prints all lowercase letters
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}