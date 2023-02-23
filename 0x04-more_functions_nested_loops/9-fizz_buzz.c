#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints FizzBuzz for multiples of 3 and 5.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;

        for (i = 1; i <= 100; ++i)
        {
                if ((i % 3 == 0) && (i % 5 == 0))
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
