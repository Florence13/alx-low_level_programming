#include "main.h"

/**
* *_strcat - check description
* @dest : string output parameter
* @src : string input parameter
* Description: concatenates two strings into one
* Return: pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	char *val = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (val);

}
