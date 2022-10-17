#include <stdio.h>
/**
 * main - viod
 * Return: 0
 */
int main(void)
{
	int x, y, z;
	/*ASCII code for 0*/
	x = 48;

	while (x < 56)

	{
		y = 49;


		while (y < 58)

		{
			z = 50;
			while (z < 58)
			{
				if (y != x && y != z && z > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (y < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
