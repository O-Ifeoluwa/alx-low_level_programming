#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function frees a 2D grid
 * @width: an integer
 * @height: an integer
 *
 * Return: 0 on success
 */

int **alloc_grid(int width, int height)
{
	int **tab;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);
	tab = malloc(height * sizeof(int *));

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		tab[i] = malloc(width * sizeof(int));
		if (tab[i] == NULL)
		{
			for (; i >= 0; i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}

	for (i = 0; i < height; ++i)
		for (j = 0; j < width; j++)
			tab[i][j] = 0;

	return (tab);
}
