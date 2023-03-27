#include "main.h"

/**
 * times_table - prototype name
 *
 * Return: always void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j  = 0; j <= 9; j++)
		{
			k = i * j;
			printf("%d", k);
			_putchar('\n');
		}
	}
}
