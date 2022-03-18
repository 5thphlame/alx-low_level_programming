#include <stdio.h>
#include <stdlib.h>

/**
 * main - fizzbuzz print ot he console 1-100.
 * Return: void.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if ((i % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		
		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
