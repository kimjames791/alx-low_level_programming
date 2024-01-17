#include <stdlib.h>

/**
 * free_grid - free the grid memory
 * @grid: grid of memory
 * @height:an  int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int p = 0;

	for (; p < height; p++)
		free(grid[p]);
	free(grid);
}
