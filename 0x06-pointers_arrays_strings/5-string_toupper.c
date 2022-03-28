#include "main.h"

/**
 * string_troupper - changes all lowercase letters to uppercase
 * @S: string to change
 *
 * Return: address of S
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
