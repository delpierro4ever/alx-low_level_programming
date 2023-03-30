#include "main.h"

/**
 * _islower - the main name of the prototype
 *
 * @c: parameter to be printed
 *
 * Return: returns either zero or one
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
