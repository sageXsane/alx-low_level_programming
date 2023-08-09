#include "main.h"

/**
 * _strdup - allocates memory to a duplicate  array of str and returns it
 * @str: the string that is going to be duplicated
 *
 * Return: returns the duplicate array else NULL
 */
char *_strdup(char *str)
{
	char *arr = malloc(strlen(str) * sizeof(char));
	unsigned int i;

	if (arr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		arr[i] = str[i];
	arr[strlen(str)] = '\0';
	return (arr);
}
