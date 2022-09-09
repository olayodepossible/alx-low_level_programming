#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * putchar(44) - ASCII value for ','
 * putchar(32) - ASCII value for 'SPACE'
 * putchar(10) - ASCII value for new-line
 * Return: 0 provided there is no error
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(32);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}
	putchar(10);
	return (0);
}
