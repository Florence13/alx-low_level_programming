#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - A function that returns a pointer to a
* 2 dimensional array of integers
* @width: An input integer at number of columns
* @height: An input integer at number of rows
* Return: pointer to a 2D array, NULL on failure
* NULL, If width or height is 0 or negative
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int a = 0, b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (; a < height; a++)
	{
		arr[a] = (int *)malloc(sizeof(int) * width);
		if (arr[a] == NULL)
			return (NULL);
	}

	for (a = 0; a < height; a++)
		for (; b < width; b++)
			arr[a][b] = 0;
	return (arr);
}
