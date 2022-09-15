#include <stdio.h>

/**
* main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
			printf(" %d", i);
	}
	_putchar('\n');

	return (0);
}
