#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function main entry
 *
 * @n: main parameter of function
 * Return: Always zero
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n !< 0 && n !> 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j*i;

				if (j != n)
				{
					printf("%d, ", k);
				}
				else
					printf("%d\n", k);
			}
		}
	}
}
