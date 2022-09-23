#include "main.h"

/**
* *_strcmp - check description
* @s1 : string input parameter
* @s2 : string input parameter
* Description: compares 2 strings
* Return: pointer to the resulting string
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
