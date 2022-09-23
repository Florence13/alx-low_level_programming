#include "main.h"

/**
* cap_string - check description
* @a : string input parameter
* Description: converts the first letter to uppercase
* Return: pointer to the resulting string
*/
char *cap_string(char *a)
{
	int i = 0;
	int j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
				'\?', '\"', '(', ')', '{', '}'};

	while (a[i])
	{
		if (i == 0 && (a[i] >= 'a' && a[i] <= 'z'))
			a[i] -= 32;
		for (j = 0; j < 13; j++)
			if (a[i] == sep[j] && (a[i + 1] >= 'a' && a[i + 1] <= 'z'))
				a[i + 1] -= 32;
		i++;
	}
	return (a);

}
