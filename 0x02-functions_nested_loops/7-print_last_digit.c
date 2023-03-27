#include "main.h"

/**
 * print_last_digit - Function name
 * @a: main parameter of function
 * Return: always return last digit of number
 */

int print_last_digit(int a)
{
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
