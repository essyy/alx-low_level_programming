#include <stdio.h>

/**
 * main - Function that prints alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	
		putchar(ch);
	for (sa = 'A'; sa <= 'Z'; sa++)
	
		putchar(sa);
		
	putchar('\n');
}
