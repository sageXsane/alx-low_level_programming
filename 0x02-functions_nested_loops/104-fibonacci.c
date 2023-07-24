#include <stdio.h>
#include <math.h>

/**
 * main - prints out the first 98 fibonacci numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int n = 3;
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next = first + second;
	unsigned long int f_n1, s_n1, f_n2, s_n2, n1, n2;

	printf("%lu, %lu, ", first, second);
	while (n <= 92)
	{
		if (n == 98)
			printf("%lu\n", next);
		else
			printf("%lu, ", next);
		first = second;
		second = next;
		next = first + second;
		n++;
	}
	f_n1 = first / 100000000000;
	s_n1 = second / 100000000000;
	f_n2 = first % 100000000000;
	s_n2 = second % 100000000000;
	for (n = 93; n <= 98; n++)
	{
		n1 = f_n1 + s_n1;
		n2 = f_n2 + s_n2;

		if (n2 > 9999999999)
		{
			n1 = n1 + 1;
			n2 = n2 % 10000000000;
		}
		printf("%lu%lu", n1, n2);
		if (n != 98)
			printf(", ");
		else
			printf("\n");
		f_n1 = s_n1;
		s_n1 = n1;
		f_n1 = s_n2;
		s_n2 = n2;
	}
	return (0);
}

