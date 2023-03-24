#include <stdio.h>

/**
 * main - main entry point of the program
 * Return: always zero
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if(i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
}
