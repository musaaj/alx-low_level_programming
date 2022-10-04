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

	if ((width <= 0) || (height <= 0))
		return (NULL);
	_width = (int **) malloc(sizeof(int *) * width);
	if (_width == NULL)
	{
		free(_width);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		_width[i] = (int *) malloc(sizeof(int) * height);
		if (_width[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(_width[j]);
			}
			free(_width);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			_width[i][j] = 0;
		}
	}
	return (_width);
}
