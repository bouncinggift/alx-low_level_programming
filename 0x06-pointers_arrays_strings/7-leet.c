#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @n: input
 * Return: n
 */
char *leet(char *)
{
	int i, j;
	char m1 = "aAeEoOtTlL";
	char m2 = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(n[i] == m1[j])
			{
				n[i] = m2[j];
			}
		}
	}
	return (n);
}
