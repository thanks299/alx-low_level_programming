#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ERROR 98

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Description: This function multiplies two numbers represented as
 * strings and prints the result. It uses an array to store the
 * intermediate results of the multiplication.
 */
void multiply(char *num1, char *num2)
{
	int len1, len2;
	int *result;
	int i, j, k;

	len1 = strlen(num1);
	len2 = strlen(num2);

	/* Allocate memory for result */
	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--) /* Multiply each digit of num1 */
	{
		for (j = len2 - 1; j >= 0; j--) /* with each digit of num2 */
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int p1 = i + j;
			int p2 = i + j + 1;
			int sum = mul + result[p2];

			result[p1] += sum / 10; /* Add carry to next position */
			result[p2] = sum % 10;  /* Store remainder in current position */
		}
	}

	for (k = 0; k < len1 + len2; k++) /* Skip leading zeros */
	{
		if (result[k] != 0)
		{
			for (i = k; i < len1 + len2; i++) /* Print the result */
			{
				printf("%d", result[i]);
			}
			printf("\n");
			free(result);
			return;
		}
	}

	printf("0\n"); /* If the result is 0 */
	free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Description: This function checks the input arguments for validity and
 * calls the multiply function to multiply the two numbers.
 *
 * Return: 0 on success, or exits with error code if input is invalid.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3) /* Check if the correct number of arguments is passed */
	{
		printf("Error\n");
		exit(ERROR);
	}

	for (i = 0; i < (int)strlen(argv[1]); i++) /* Check if num1 is a valid number */
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(ERROR);
		}
	}

	for (i = 0; i < (int)strlen(argv[2]); i++) /* Check if num2 is a valid number */
	{
		if (!isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(ERROR);
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}

