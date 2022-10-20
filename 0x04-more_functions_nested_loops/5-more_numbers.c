#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: always 0
 */
void more_numbers(void)
{
	int t, nums;

	for (t = 0; t <= 9; t++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums > 9)
			{
				_putchar((nums / 10) + '0');
			}
			_putchar((nums % 10) + '0');
		}

		_putchar('\n');
	}	
}
