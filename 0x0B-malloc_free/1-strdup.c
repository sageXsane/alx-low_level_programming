#include "main.h"

/**
 * _strdup - allocates memory to a duplicate  array of str and returns it
 * @str: the string that is going to be duplicated
 *
 * Return: returns the duplicate array else NULL
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	arr = malloc((strlen(str) + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		arr[i] = str[i];
	arr[strlen(str)] = '\0';
	return (arr);
}
