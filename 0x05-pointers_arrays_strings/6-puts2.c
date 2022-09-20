#include "main.h"

/**
* puts2 - check description
* @str : string input parameter
* Description: prints the char with step 2
* Return: nothing
*/
void puts2(char *str)
{
	int n = 0;
	int i = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	n--;

	for (; i <= n; i += 2)
		_putchar(str[i]);
	_putchar('\n');

}
