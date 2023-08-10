#include "main.h"

/**
 * string_nconcat - concates s1 and n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to be copied
 *
 * Return: returns the pointer of allocated memory/malloc failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	arr = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		arr[i] = s1[i];
	for (j = 0; j < n; j++)
		arr[i + j] = s2[j];
	arr[strlen(s1) + n + 1] = '\0';
	return (arr);
}
