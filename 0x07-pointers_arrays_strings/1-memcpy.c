#include "main.h"

/**
  * _memcpy - function copies n bytes from src to dest
  * @src: source to copy bytes from
  * @dest: destination area to copy to
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *val = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (val);
}
