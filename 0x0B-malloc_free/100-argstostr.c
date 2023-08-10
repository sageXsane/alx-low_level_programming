#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments on command line
 * @av: array conatining arguments
 *
 * Return: returns pointer to new string/NULL
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, a, b, c;
	int size = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
	}
	arr = malloc((size + ac + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			arr[c] = av[a][b];
			b++;
			c++;
		}
		arr[c] = '\n';
		c++;
	}
	return (arr);
}
