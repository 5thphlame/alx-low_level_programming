#include <stdio.h>

/**
 * main - prints the alphabetin lowercase,
 * followed by a new line, except q and e
 * Reurn: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if(ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
