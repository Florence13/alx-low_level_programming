#include "main.h"
int divide(int num, int m);

/**
* is_prime_number - function that checks if a number is prime.
* @n: an input integer
* Return: 1 if n is prime or  0 in otherwise
*/
int is_prime_number(int n)
{
	int m = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (divide(n, m));
}

/**
* divide - check if num is divisible
* @num: the number to be checked
* @m: the result of division
* Return: 1 if num is divisible or 0 if num is not divisible
*/
int divide(int num, int m)
{
	if (num % m == 0)
		return (0);

	if (m == num / 2)
		return (1);

	return (divide(num, m + 1));
}
