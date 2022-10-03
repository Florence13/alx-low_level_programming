#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  * Return: NULL if str = NULL else a pointer to the duplicated string
  */
char *_strdup(char *str)
{
	int a = 0;
	int n = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[n])
		n++;
	s = malloc((sizeof(char) * n) + 1);
	if (s == NULL)
		return (NULL);
	while (a < n)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
