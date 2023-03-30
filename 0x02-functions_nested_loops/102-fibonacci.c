#include <stdio.h>

/**
 * main - main entry point of program
 * Return: always zero
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 0;

	for (i = 1; i <= 50; i++)
	{
		k = i + j;
		printf("%d, ", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
