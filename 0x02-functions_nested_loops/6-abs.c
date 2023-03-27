#include "main.h"

/**
 * _abs - function name 
 *
 * @a: main parameter of function
 *
 * Return: returns absolute value
 *
 *
 */

int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	else if (a >= 0)
		a = a;
	return (a);
}
