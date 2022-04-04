#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a grid
 * @width: the cols of the grid
 * @height: the rows of the grid
 * Return: the grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
