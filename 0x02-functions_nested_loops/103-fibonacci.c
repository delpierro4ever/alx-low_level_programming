#include <stdio.h>

/**
 * main - main entry of program
 * Return: always zero
 */

int main(void)
{
	int a, i = 0, j = 1, k = 0, n;

	for (n = 0; n <= 50; n++)
	{
		k = i + j;
		if (k % 2 == 0 && k <= 4000000)
			a = a + k;
		else if (k > 4000000)
			break;
	}
	printf("%d\n", a);
	return (0);
}
