#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - locates the first occurrence of the accept
  * @s: the string tp search through
  * @accept: char to look for
  *
  * Return: the a pointer to the first occurrence of accept
  */
char *_strpbrk(char *s, char *accept)
{
	char *ini = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = ini;
		s++;
	}

	return (NULL);
}
