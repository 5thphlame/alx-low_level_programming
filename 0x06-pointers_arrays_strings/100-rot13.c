#include "main.h"

/**
 * rot13 - encode strings using rot13 encoding.
 * @str: string to be encoded
 *
 * Return: encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 52; ++j)
		{
			if (str[i] == arr1[j])
			{
				str[i] = arr2[j];
				break;
			}
		}
	}
	return (str);
}
