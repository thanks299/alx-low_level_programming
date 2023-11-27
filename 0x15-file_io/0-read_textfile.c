#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile and print
 * return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters);

int main() 
{
FILE *file;
char *filename = "Requiescat"; 
int c;
file = fopen(filename, "r");
if (file == NULL)
{
perror("Error opening file");
return 1;
}
while ((c = fgetc(file)) != EOF)
{
putchar(c);
}
fclose(file);
return 0;
}
