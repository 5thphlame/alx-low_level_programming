#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: array
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	y = 0;
	while (a[y][x] != '\0')
	{
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		x = 0;
		_putchar('\n');
		y++;
	}
}