#include "main.h"

/**
* print_alphabet_x10 - check description
* Description: it prints the word a-z in lower case.
* a total of 10 times
* Return: Nothing.
*/
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
