#include <stdio.h>

/**
 * main - main entry point of program
 * Return: always zero
 */

int main(void)
{
	unsigned int i = 0;
	unsigned int j = 1;
	unsigned int k = 0;
	int n;

	for (n = 1; n <= 50; n++)
	{
		k = i + j;
		printf("%u, ", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
