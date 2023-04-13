#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array.
 * @size: size of allocated mem.
 * @c: the char to intialize the array with.
 * Return: resulst returned.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
