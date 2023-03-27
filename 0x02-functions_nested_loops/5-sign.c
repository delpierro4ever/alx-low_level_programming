#include "main.h"

/**
 * print_sign - Name of function prototype
 *
 * @n: Main parameter to determine return value
 *
 * Return: returns either zero, plus or minus
 *
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
