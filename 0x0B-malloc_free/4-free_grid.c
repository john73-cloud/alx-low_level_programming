#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - creating a grid
 * @height: width of said grid
 * @grid: height of aforementioned grid
 * Return: int **
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid);
	}
}
