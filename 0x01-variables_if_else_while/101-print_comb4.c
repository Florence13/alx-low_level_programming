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
	int n;

	for (j = '0'; j <= '7'; j++)
	{
		for (m = j + 1; m <= '9'; m++)
		{
			for (n = m + 1; n <= '9'; n++)
			{
				if ((j != m) != n)
				{
					putchar(j);
					putchar(m);
					putchar(n);

					if (j == '7' && m == '8')
						continue;

					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');

	return (0);
}
