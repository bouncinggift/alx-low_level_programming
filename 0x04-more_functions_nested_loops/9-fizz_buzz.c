/**
 * main - print fizzbuzz
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 5 == 0; && n % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
	}
	printf("\n");
	return (0);
}