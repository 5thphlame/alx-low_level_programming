#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)
int isNumber(char number[]);
/**
 * main - prints out program name
 * @argc: number of args to be passed
 * @argv: strings passed
 * Return: alway 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i, r;

		r = 0;
		for (i = 1; i < argc; i++)
		{

			if (isNumber(argv[i]))
			{

				r += atoi(argv[i]);

			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%i\n", r);
		return (0);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
/**
 * isNumber - checks if string is number
 * @number: string to check
 * Return:1 if true 0 if false
 *
 */
int isNumber(char number[])
{
	int i = 0;

	if (number[0] == '-')
	i = 1;

	for (; number[i] != 0; i++)
	{
		if (!isdigit(number[i]))
		return (0);
	}
	return (1);
}
