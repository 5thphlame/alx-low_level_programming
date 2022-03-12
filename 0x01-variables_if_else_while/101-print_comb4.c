#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c;
	int ci; /*count decimas*/
	int ciii;

	c= 48;
	ci = 48;
	ciii = 48;
	for (ci = 48; ci < 58; ci++)
	{
		for (c = 48; c < 58; c++)
		{
			for(ciii = 48; ciii < 58; ciii++)
			{
				if((c > ci) && (ciii > c))
				{
					putchar(ci);
					putchar(c);
					putchar(ciii);
					if ((ci != 55))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
