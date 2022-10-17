#include <stdio.h>
/**
 * main - void
 * Return: 0
 */
int main(void)
{
	int w, x, y, z;
	/*ASCII code for 0*/
	w = 48;

	while (w < 58)

	{
		x = 48;

		while (x < 57)

		{
			y = 48;

			while (y < 58)

			{
				z = 49;

				while (z < 58)

				{
					if (w <= y && x <= z && x != z)
					{
						putchar(w);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
						if (x < 58)
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
		w++;
	}
	putchar('\n');
	return (0);
}
