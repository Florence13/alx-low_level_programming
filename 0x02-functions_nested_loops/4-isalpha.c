#include "main.h"

/**
* _isalpha - check description
* @c: A char input parameter
* Description: it checks if the input is an alphabet.
* Return: 1 if c is lowercase, otherwise 0
*/
int _isalpha(int c)
{
	char a;
	int val = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c || a - 32 == c)
			val = 1;
	}
	return (val);
}
