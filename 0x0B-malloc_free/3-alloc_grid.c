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
	(void) j;
	(void)i;
	if ((width <= 0) || (height <= 0))
		return (NULL);
	_height = malloc(sizeof(int) * width);
	_width = malloc(sizeof(_height) * height);
	free(-height);
	if (_width == NULL)
		return (NULL);
	return (_width);
}
