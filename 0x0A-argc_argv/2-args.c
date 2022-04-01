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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
