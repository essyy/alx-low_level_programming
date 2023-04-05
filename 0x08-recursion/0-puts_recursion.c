#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *@s: string that is printed
 *
 * Return: Always zero(Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
