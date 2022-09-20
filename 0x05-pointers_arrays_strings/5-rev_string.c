#include "main.h"

/**
* rev_string - check description
* @s : string input parameter
* Description: reverses the string
* Return: nothing
*/
void rev_string(char *s)
{
	int n = 0;
	int i;
	char t;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;

	for (i = 0; i < n; i++)
	{
		t = s[i];
		s[i] = s[n];
		s[n] = t;
		n--;
	}

}
