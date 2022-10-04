#include <stdlib.h>
/**
* free_grid - free allocated memory
* @grid: int 2d array
* @height: int length of @grid
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
