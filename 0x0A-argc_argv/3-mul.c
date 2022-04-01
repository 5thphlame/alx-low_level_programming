#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * main - prints out program name
 * @argc: number of args to be passed
 * @argv: strings passed
 * Return: alway 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int x, y, r;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		r = x * y;
		printf("%i\n", r);
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
