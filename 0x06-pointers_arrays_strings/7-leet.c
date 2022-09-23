#include "main.h"

/**
* *leet - check description
* @a : string input parameter
* Description: encodes a string into 1337.
* Return: pointer to the resulting string
*/
char *leet(char *a)
{
	int i = 0;
	int j;
	char s[] = {'a', 'e', 'o', 't', 'l'};
	char sub[] = {'4', '3', '0', '7', '1'};

	while (a[i])
	{
		for (j = 0; j < 5; j++)
			if (a[i] == s[j] || a[i] == (s[j] - 32))
				a[i] = sub[j];
		i++;
	}
	return (a);

}
