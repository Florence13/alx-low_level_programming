#include "main.h"

/**
* print_rev - check description
* @s : string input parameter
* Description: prints a string in reverse
* Return: nothing
*/
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	n--;

	for (; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');

}
