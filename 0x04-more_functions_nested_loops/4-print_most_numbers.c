#include "main.h"

/**
* print_most_numbers - check description
* Description: it prints from 0-9, excluding
* 2 and 4
* Return: Nothing.
*/
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
