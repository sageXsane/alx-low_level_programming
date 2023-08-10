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
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	arr = malloc((len1 + n + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];
	for (j = 0; j < n; j++)
		arr[i + j] = s2[j];
	arr[len1 + n] = '\0';
	return (arr);
}
