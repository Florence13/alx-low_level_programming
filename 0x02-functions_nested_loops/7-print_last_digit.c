#include "main.h"

/**
* print_last_digit - check description
* @n: An integer input parameter
* Description: it prints the last digit
* of the input number
* Return: the last digit of the number
*/
int print_last_digit(int n)
{
	int val;

	if (n < 0)
		val = -1 * (n % 10);
	else
		val = n % 10;
	_putchar(val + '0');

	return (val);
}
