#include "main.h"
#include <stdio.h>

/**
 * times_table - prototype name
 *
 * Return: always void
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j  = 0; j <= 9; j++)
		{
			k = j * i;
			if (j != 9)
			{
				printf("%d", k);
				_putchar(', ');
			}
			printf("%d", k);
			_putchar('\n');
		}
	}
}
