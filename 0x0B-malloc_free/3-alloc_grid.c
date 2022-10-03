#include <stdlib.h>
/**
 * alloc_grid - allocate a 2d memory grid
 * @width: int
 * @height: int
 * Return: 2d int array
 */
int **alloc_grid(int width, int height)
{
	int i, j,  **_width, *_height;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	_height = malloc((sizeof(int)) * height);
	if (_height == NULL)
		return (NULL);
	_width = malloc((sizeof(height)) * width);
	if (_width == NULL)
		return (NULL);
	free(_height);
	for (i = 0; i < width; i++)
	{
		_height = malloc((sizeof(int)) * height);
		for (j = 0; j < height; j++)
		{
			_height[j] = 0;
		}
		_width[i] = _height;
	}
	return (_width);
}
