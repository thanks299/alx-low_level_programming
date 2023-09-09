#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - To Prints numbers from 0 to 9.
 *
 * Return: make 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
