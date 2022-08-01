#include "main.h"

/**
 * _perror - function that prints error message to stderr using the last errno
 * @exit_value: integer value representing the exit status
 *
 * Return: nothing
 */
void _perror(int exit_value)
{
	perror("Error");

	exit(exit_value);
}
