#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - main entery of function
 *
 * @n: main parameter of function
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
