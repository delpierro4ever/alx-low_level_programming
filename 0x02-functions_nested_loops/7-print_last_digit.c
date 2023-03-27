#include "main.h"

/**
 * print_last_digit - Function name
 * @a: main parameter of function
 * Return: always return last digit of number
 */

int print_last_digit(int a)
{
	if (a < 0)
		a = a * -1;
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
