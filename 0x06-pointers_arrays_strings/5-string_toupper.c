#include "main.h"
/**
* string_toupper - changes all lowercase letters to uppcase
* @c: parameter char set 
*/
char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if ((*(c + i) >= 97 && (*(c + i) < 123))
			*(c + i) = *(c + i) - 32;
		i++;
	}
}
