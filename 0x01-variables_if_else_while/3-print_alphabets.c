#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To Prints the alphabet.
 *
 * Return: make 0 (Successful)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
