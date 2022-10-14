#include <stdio.h>
/**
 * main - void
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)

	{
		if (x != 'e' && x != 'p')
		{
			putchar(x);
		}
	}
		putchar('\n');
		return (0);
}
