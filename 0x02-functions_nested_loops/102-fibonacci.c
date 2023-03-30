#include <stdio.h>

/**
 * main - main entry point of program
 * Return: always zero
 */

int main(void)
{
	unsigned long long int i = 0;
	unsigned long long int j = 1;
	unsigned long long int k = 0;
	int n;

	for (n = 1; n <= 50; n++)
	{
		k = i + j;
		printf("%llu, ", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
