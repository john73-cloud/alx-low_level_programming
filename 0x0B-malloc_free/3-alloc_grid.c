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
	int i;

	if (width =< 0 || height =< 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	return (grid);
}
