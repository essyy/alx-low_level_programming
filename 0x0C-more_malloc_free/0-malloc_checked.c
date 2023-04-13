#include "main.h"
/**
 * malloc_checked - functions that allocates memory
 * @b: integer
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return (98);
	else
		return (ptr);
}
