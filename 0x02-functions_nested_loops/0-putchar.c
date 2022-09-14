#include "main.h"
/**
*main prints "_putchar"
*Description: it prints the word "_putchar" using an array
*Return: 0
*/
int main(void)
{
	int a;
	char w[8] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		_putchar(w[a]);
	}
	_putchar('\n');

	return (0);
}
