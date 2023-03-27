#include "main.h"

/**
 * print_last_digit - Function name
 * @a: main parameter of function
 * Return: always return last digit of number
 */

int print_last_digit(int a)
{
	int k;
	
	k = a % 10;
	if (k < 0)
		a = a * -1;
	_putchar(a + '0');
	return (k);
}
