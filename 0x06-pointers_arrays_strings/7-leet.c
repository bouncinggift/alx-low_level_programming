#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @s: input
 * Return: n
 */
char *leet(char *s)
{
	int i, j;
	char m1 = "aAeEoOtTlL";
	char m2 = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(s[i] == m1[j])
			{
				s[i] = m2[j];
			}
		}
	}
	return (s);
}
