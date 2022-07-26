#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	x = malloc(size * sizeof(char));
	if (x == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
