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

	(void) j;
	if ((width <= 0) || (height <= 0))
		return (NULL);
	_width = malloc(sizeof(int) * width * height);
	return (_width);
}
