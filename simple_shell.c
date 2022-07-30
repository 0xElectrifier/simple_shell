#include "main.h"

/**
 * main - a simple shell
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char **parsedAv, *envi[10];
	(void)av;
	(void)ac;

	*envi = {"PATH=/bin", NULL};
	while (1)
	{
		prompt_cmd();
		parsedAv = read_cmd();

		if (fork() != 0)
			wait(NULL);
		else
			execve(parsedAv[0], parsedAv, envi);
/*			for (j = 0; parsedAv[j] != NULL; j++)
                		printf("String: %s\n", parsedAv[j]);
*/
	}

	return (0);
}
