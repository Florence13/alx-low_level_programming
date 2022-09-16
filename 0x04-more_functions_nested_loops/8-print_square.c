#include "main.h"

/**
* print_square - check description
* @size: An int input parameter
* Description: it prints # in size by size
* number of lines
* as specified by the user.
* Return: Nothing.
*/
void print_square(int size)
{
	int i;
	int l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (l = 1; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
