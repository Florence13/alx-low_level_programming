#include "main.h"

/**
* print_numbers - check description
* Description: it prints from 0-9.
* Return: Nothing.
*/
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
