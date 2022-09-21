#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, c2 = 0;

	while (*(dest + c) != '\0')
		c++;
	while (*(src + c2) != '\0')
	{
		*(dest + c) = *(src + c2);
		c++;
		c2++;
	}
	*(dest + c) = '\0';

	return (dest);
}
