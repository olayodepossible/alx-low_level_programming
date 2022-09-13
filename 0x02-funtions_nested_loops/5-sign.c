#include "main.h"

/**
* print_sign - prints the sign of a number
* @n - int parameter
* Return: 1 if n is greater than zero or -1 if is less or n 
*/
int print_sign(int n)
{
	if(n == 0)
	{
		_putchar(48);

                return(n);
	}
	else
	{
		if(n > 0)
		{
			_putchar('+');

			return(1);
		}
		_putchar('-');

                return(-1);
	}
	

}
