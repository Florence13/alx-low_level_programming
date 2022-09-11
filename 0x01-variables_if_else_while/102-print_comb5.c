#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: return one of the 3 options
*/
int main(void)
{
	int j;
	int m;

	for (j = 0; j <= 98; j++)
	{
		for (m = j + 1; m <= 99; m++)
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			if (j == 98 && m == 99)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
