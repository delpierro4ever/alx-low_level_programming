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

	for (i = n; i <= 98; i++)
		printf("%d, ", i);
	_putchar('\n');
	printf("98");
}
