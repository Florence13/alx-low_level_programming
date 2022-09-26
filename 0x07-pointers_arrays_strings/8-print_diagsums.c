#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of a square matrix
  * of integers
  * @a: the matrix
  * @size: the size
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
