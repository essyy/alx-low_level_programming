#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the character
 * @accept: pointer for values in the acept character string
 *
 * Return: library provides a similar function
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, j;

	unsigned int pt = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[a] == accept[j])
			{
				pt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (pt);
		}
	}
return (pt);
}
