#include "main.h"

/**
 * _isalpha - name of function
 * @c: parameter to be determined
 * Return: returns either zero or one
 */

int _isalpha(int c)
{
	if ((c <= 65 && c <= 90) || (c <= 97 && c >= 122))
		return (1);
	else
		return (0);
}
