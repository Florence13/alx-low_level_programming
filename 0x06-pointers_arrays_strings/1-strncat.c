#include "main.h"

/**
* *_strncat - check description
* @dest : string output parameter
* @src : string input parameter
* @n : int input parameter
* Description: concatenates two strings into one using n
* Return: pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int srcL = 0;
	char *beg = src;
	char *val = dest;
	int i;

	while (*dest)
		dest++;

	while (*src)
	{
		srcL++;
		src++;
	}

	if (n > srcL)
		n = srcL;

	src = beg;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (val);

}
