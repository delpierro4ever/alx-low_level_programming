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
	int n;

	for (n = 1; n <= 50; n++)
	{
		k = i + j;
		printf("%d, ", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
