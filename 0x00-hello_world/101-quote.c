#include <string.h>
#include <unistd.h>

/**
 * main - displays output to standard error
 * @message: contains output
 *
 * Description: contains unistd header which provides write function
 * which allows for output to be displayed in stderr
 * also contains string.h which provides strlen function
 * Return: returns 1
 */
int main(void)
{
<<<<<<< HEAD
	const char message[] = "and that piece of art is useful\" - Dora Korpar\
, 2015-10-19\n";

	write(2, message, strlen(message));
	return (1);
}
