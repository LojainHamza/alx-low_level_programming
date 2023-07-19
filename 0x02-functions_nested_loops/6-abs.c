#include "main.h"

/**
 * _abs - calculate the absolute value of an integer.
 * @n: takes in integer type inpt for function
 * Return: always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
