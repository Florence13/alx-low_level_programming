#include "main.h"

/**
* times_table - check description
* Description: it prints 0-9 times table
* Return: Nothing.
*/
void times_table(void)
{
	int j;
	int i;
	int n = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}

}
