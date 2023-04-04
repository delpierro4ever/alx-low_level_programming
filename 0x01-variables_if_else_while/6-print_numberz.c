#include <stdio.h>

/**
 * main - main entry point of program
 * Return: always zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
