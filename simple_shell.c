#include "main.h"

/**
 * main - a simple shell
 *
 * Return: Always 0
 */
int main(void)
{
	char **parsedAv;
	
	char *envi[3] = {"PATH=/bin", NULL};
	while (1)
	{
		prompt_cmd();
		parsedAv = read_cmd();
		if (parsedAv == NULL)
			continue;
		printf("GGG: %s\n", parsedAv[0]);

		if (strcmp(parsedAv[0], "exit") == 0)
			break;

		if (fork() != 0)
			wait(NULL);
		else
			if (execve(parsedAv[0], parsedAv, envi) == -1)
				printf("Error from exe\n");
	}

	return (0);
}
