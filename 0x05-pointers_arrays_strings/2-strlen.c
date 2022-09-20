#include "main.h"

/**
* _strlen - check description
* @s : string input parameter
* Description: checks the length of the string
* Return: the length of the string
*/
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
