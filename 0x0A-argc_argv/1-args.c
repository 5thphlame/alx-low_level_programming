#include <stdio.h>
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
	int a;

	a = argc - 1;
	UNUSED(argv);
	printf("%i\n", a);
	return (0);
}
