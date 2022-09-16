#include "main.h"

/**
* more_numbers - check description
* Description: it prints 0-14, 10 times
* Return: Nothing.
*/
void more_numbers(void)
{
	int l;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
				_putchar(l / 10 + '0');

			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}

}
