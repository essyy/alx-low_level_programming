#include "main.h"

/*
 * print_alphabet -  prints the alphabet
 */
void print_alphabet(void)
{
	char letee;

	for (letee = 'a'; letee <= 'z'; letee++)
	{
		_putchar(letee);
	}
	_putchar('\n');
}
