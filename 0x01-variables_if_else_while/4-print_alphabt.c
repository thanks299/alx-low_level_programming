#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - To Prints the alphabet without q and e.
 *
 * Return: make 0 (Successful)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
