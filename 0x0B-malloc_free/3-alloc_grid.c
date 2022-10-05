#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creating a grid
 * @width: width of said grid
 * @height: height of aforementioned grid
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int **grid = malloc(sizeof(int *) * height);
	int i, m, i2;

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	}
	for (i2 = 0; i2 < height; i++)
	{
		for (m = 0; m < width; m++)
		{
			grid[i][m] = 0;
		}
	}
	return (grid);
}
