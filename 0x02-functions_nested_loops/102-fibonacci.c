#include <stdio.h>

/**
 * main - main entry point of program
 * Return: always zero
 */

int main(void)
{
	double i = 0;
	double j = 1;
	double k = 0;
	int n;

	for (n = 1; n <= 50; n++)
	{
		k = i + j;
		printf("%lf, ", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
