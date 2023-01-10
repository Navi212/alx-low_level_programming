#include "main.h"
#include <stdlib.h>

/**
  * free_grid -deallocates grid memory
  * @grid: grid
  * @height: height
  *
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

