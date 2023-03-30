#include "main.h"

/**
 * _isalpha - name of function
 * @c: parameter to be determined
 * Return: returns either zero or one
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 60 && c <= 90))
		return (1);
	else
		return (0);
}
