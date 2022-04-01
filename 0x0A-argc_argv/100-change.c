#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints minimum number of coins to
 * make change
 * @argc: size of @argv
 * @argv: contain the name of program and exactly one more
 * argument;
 * Return: 1 if the amount s of arguments passed is not exactly 1,
 * else 0
 */
int main(int argc, char **argv)
{
	int cents;
	int coins = 0;
	int cv[5] = {25, 10, 5, 2, 1};   /*coin values*/
	int i;

	if (argc !=  2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			coins += cents / cv[i];
			cents -= (cents / cv[i]) * cv[i];
		}
	}

	printf("%d\n", coins);
	return (0);
}
