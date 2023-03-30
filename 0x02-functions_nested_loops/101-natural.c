#include <stdio.h>

/**
 * main - Entry point of program
 * Retrun: always zero
 */

int main()
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			j = j + i;
		}
	}
	printf("%d\n", j);
	return (0);
}
