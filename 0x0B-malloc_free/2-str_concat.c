#include "main.h"

/**
 * str_concat - concatenates two strings into a memory allocated array
 * @s1: first string
 * @s2: second string
 *
 * Return: returns the pointer to concatenated array/ null if arr = null
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j;
	size_t size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (strlen(s1) + strlen(s2)) * sizeof(char);
	arr = malloc(size);
	if ((size == 0) || (arr == NULL))
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		arr[i] = s1[i];
	for (j = 0; j < strlen(s2); j++)
		arr[strlen(s1) + j] = s2[j];
	arr[strlen(s1) + strlen(s2)] = '\0';
	return (arr);
}
