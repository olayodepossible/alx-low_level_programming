#include "main.h"
/**
 * _strncat - concatenates two strings,using n byte from src
 * @dest: destination.
 * @src: source.
 * @n: byte limit
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, c2 = 0;

	while (*(dest + c) != '\0')
		c++;
	while (c2 < n)
	{
		*(dest + c) = *(src + c2)
		if (*(src + c2) == '\0')
			break;
		c++;
		c2++;
	}

	return (dest);
}
