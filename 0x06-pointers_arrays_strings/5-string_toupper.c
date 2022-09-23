#include "main.h"

/**
* *string_toupper - check description
* @a : string input parameter
* Description: converts a string to uppercase
* Return: pointer to the resulting string
*/
char *string_toupper(char *a)
{
	char *val = a;

	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a -= 32;
		a++;
	}
	return (val);

}
