#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To prints all possible combinations of single-digit numbers
 * Return: make 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
