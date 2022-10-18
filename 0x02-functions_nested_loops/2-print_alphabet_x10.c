#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void);
{
	int count;
	int Lc;

	for (count = 0; count <= 9; count++)
	{
		for (Lc = 'a'; Lc <= 'z'; Lc++)
			_putchar(Lc);
		_putchar('\n');
	}
}
