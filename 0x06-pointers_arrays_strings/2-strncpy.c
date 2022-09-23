#include "main.h"

/**
* *_strncpy - check description
* @dest : string output parameter
* @src : string input parameter
* @n : int input parameter
* Description: copies a string into another string
* Return: pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int srcL = 0;
	char *beg = src;
	char *val = dest;
	int i;


	while (*src)
	{
		srcL++;
		src++;
	}
	srcL++;

	if (n > srcL)
		n = srcL;

	src = beg;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (val);

}
