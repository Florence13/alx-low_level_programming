#include "main.h"
#include <stdio.h>

/**
  * _strchr - function to search for a char
  * @s: the string to search through
  * @c: char to look for
  *
  * Return: the a pointer to the first occurrence of c
  */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
