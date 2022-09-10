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
	int n;
	char j;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
