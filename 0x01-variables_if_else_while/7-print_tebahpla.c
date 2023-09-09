#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - To prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: make 0 (Successful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
