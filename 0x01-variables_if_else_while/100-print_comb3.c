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

	for (j = '0'; j <= '8'; j++)
	{
		for (m = j + 1; m <= '9'; m++)
		{
			if (j != m)
			{
				putchar(j);
				putchar(m);

				if (j == '8' && m == '9')
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
