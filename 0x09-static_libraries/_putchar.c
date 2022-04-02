#include "main.h"

/**
 * _putchar - prints to the standard output
 * @c: character to print
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropraitely.
 */
int _putchar(char c)
{
	int i;
	char msg[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');

	return (0);
}