#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char taim;

	int n = 0;

	while (n <= 10)
	{
		for (taim = 'a'; taim <= 'z'; taim++)
		{
		
		_putchar(taim);
		}
		 _putchar('\n');
		n++;
	}
}
