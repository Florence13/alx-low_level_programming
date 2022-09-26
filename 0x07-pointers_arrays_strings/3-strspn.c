#include "main.h"
#include <stdio.h>

/**
  * _strspn - Returns the number of bytes
  * @s: the string tp search through
  * @accept: char to look for
  *
  * Return: the a pointer to the first occurrence of c
  */
unsigned int _strspn(char *s, char *accept)
{
	char *first = accept;
	int i = 0;
	int state;

	while (*s)
	{
		state = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				state = 1;
				i++;
				break;
			}
			accept++;
		}
		accept = first;
		s++;
		if (state == 0)
			break;
	}

	return (i);
}
