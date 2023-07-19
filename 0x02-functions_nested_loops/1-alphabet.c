#include "main.h"

/**
 * main - Entry point
 * print_alphabet - prints all alphabet in lowercase.
 * Return: Nothing
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
