#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

/* 
 * main - Here is the main entry for the program
 * Return: returns 0
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("\n%d: is positive", n);
	else if (n==0)
		printf("\n%d: is zero", n);
	else (n < 0)
		printf("\n%d: is negative, n)
	return (0);
}
