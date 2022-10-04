#include <stdlib.h>
/**
 * alloc_grid - allocate a 2d memory grid
 * @width: int
 * @height: int
 * Return: 2d int array
 */
int **alloc_grid(int width, int height)
{
	int i, j,  **_height;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	_height = malloc(sizeof(int *) * height);
	if (_height == NULL)
	{
		free(_height);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		_height[i] = malloc(sizeof(int) * width);
		if (_height[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(_height[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			_height[i][j] = 0;
		}
	}
	return (_height);
}
