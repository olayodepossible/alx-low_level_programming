#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1, n2, fn, tn;

	n1 = 1;
	n2 = 2;
	fn = tn = 0;
	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			tn += n1;
		}
	}
	printf("%ld\n", tn);

	return (0);
}
