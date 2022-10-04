#include <stdlib.h>
/**
 * alloc_grid - allocate a 2d memory grid
 * @width: int
 * @height: int
 * Return: 2d int array
 */
int **alloc_grid(int width, int height)
{
	int i, j,  **_width;

	_width = (int **) malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
	{
		_width[i] = (int *) malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
		{
			_width[i][j] = 0;
		}
	}
	return (_width);
}
