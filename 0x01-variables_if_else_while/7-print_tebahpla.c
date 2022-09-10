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
	char j;

	for (j = 'z'; j >= 'a'; j--)
		putchar(j);
	putchar('\n');

	return (0);
}
