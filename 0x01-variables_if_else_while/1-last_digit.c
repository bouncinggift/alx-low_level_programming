#include <stdlib.h>

#include <time.h>

/* more headers goes there */
/**
 * main - void
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, Lastdigit;
	srand(time(0));	
	n = rand() - RAND_MAX / 2;
	Lastdigit = n % 10;
		if (Lastdigit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5", n, Lastdigit);
		} else if (Lastdigit == 0)
		{
			printf("Last digit of %d is %d and is 0", n, Lastdigit);
		} else if (n < 6 && n != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0", n, Lastdigit);
		}
		return (0);

}