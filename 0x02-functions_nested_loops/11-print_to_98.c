#include <stdio.h>

/**
* print_to_98 - print all natural from n to 98
* @n: parameter
*/
void print_to_98(int n)
{
	int k = 98;

	if (n == k)
		printf("%d", n);
	else
	{
		if (n > k)
		{
			while (n >= k)
			{
				printf("%d, ", n);
				n--;
			}
		}
		else
		{
			while (n <= k)
			{
				printf("%d, ", n);
				n++;
			}
		}

	}

	printf("\n");

}
