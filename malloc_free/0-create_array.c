#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 * @c: caractere
 * @size: the size of the memory to print
 *
 * Return: table
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (((void *)0));

	for (i = 0; i < size; i++)
		array[i] = c;
	array[i] = '\0';

	if (size == 0)
		return (NULL);

	return (array);
}
