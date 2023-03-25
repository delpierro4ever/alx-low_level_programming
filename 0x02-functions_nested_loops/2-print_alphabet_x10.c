#include "main.h"

/**
 * print_alphabet_x10(void) - main function prototype
 * Return: always void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet(void);
		_putchar('\n');
	}
	_putchar('\n');
}
