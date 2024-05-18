#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to
 * n bytes of the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Description: This function concatenates the string s1 with the first n bytes
 * of the string s2. If n is greater than the
 * length of s2, the entire string s2
 * is concatenated to s1. The resulting string is null-terminated. If memory
 * allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly allocated space in memory containing the
 * concatenated string, or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = s1 ? strlen(s1) : 0;
unsigned int len2 = s2 ? strlen(s2) : 0;
unsigned int concat_len = len1 + (n < len2 ? n : len2) + 1;
char *result = malloc(concat_len);

if (!result)
{
return (NULL);
}

memcpy(result, s1, len1);
memcpy(result + len1, s2, n < len2 ? n : len2);
result[concat_len - 1] = '\0';
return (result);
}
