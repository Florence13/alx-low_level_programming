#include "main.h"
#include <stdio.h>

/**
  * main - a program that prints all arguments it receives
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: Zero
  */
int main(int argc, char *argv[])
{
	int n = 0;

	for (; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
