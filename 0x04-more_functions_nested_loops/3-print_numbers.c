#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
