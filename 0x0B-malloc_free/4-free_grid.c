#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees the dynamic memory allocated in alloc_grid function
*
* @grid: pointer
* @height: array height
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	(void)height;

	free(grid);
}
