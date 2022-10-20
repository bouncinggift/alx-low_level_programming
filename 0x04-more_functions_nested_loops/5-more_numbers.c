#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: always 0
 */
void more_numbers(void)
{
	int count, nums;

	for (count = 0; count <= 9; count++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (num > 9)
			{
				_putchar((nums / 10) + '0');
			}
			_putchar((nums % 10) + '0');
		}

		_putchar('\n');
	}	
}
