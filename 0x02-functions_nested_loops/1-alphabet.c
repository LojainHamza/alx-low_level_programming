#include "main.h"

/**
 * Description: print alphabet - print all alphabet in lowercase.
 * Return: always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
