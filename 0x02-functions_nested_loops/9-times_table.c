#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num1, num2, prod;

	for (num1 = 0; num1 <= 9; num1++)
	{

		for (num2 = 0; num2 <= 9; num2++)
		{
			prod = num1 * num2;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}