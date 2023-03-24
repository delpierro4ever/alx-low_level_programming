#include <stdio.h>

/**
 * main - Main Entry point of program
 * Return: always zero
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; j++)
	{
		for (k = 2; k < 10; k++)
		{
			if (i < j && j < k)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i + j + k != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
