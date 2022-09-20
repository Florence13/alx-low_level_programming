#include "main.h"

/**
* puts_half - check description
* @str : string input parameter
* Description: prints the bottom half of array
* Return: nothing
*/
void puts_half(char *str)
{
	int n = 0;
	int i = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if ((n % 2) != 0)
		i = (n + 1) / 2;
	else
		i = n / 2;

	for (; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');

}
