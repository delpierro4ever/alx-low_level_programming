#include <stdio.h>

/**
 * main - main entry point of program
 * Return: always zero
 */

int main(void)
{
	int i;
	int k = 0;

	for (i = 1; i <= 50; i++)
	{
		k = k + i;
		printf("%d, ", k);
	}
	printf("\n");
	return (0);
}
