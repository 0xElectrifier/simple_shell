#include "main.h"

/**
 * main - a simple shell
 *
 * Return: Always 0
 */
int main(int argc, char **argv, char **envp)
{
	int pid_i;
	char **parsedAv;

	if (argc > 1)
	{
		if (execve(argv[1], argv, NULL) == -1)
			_perror(-1);
		return (0);
	}
	while (1)
	{
		printf("New\n");
		if (isatty(fileno(stdin)))
			prompt_cmd();
		parsedAv = read_cmd();
		if (parsedAv == NULL)
			continue;

		if (strcmp(parsedAv[0], "exit") == 0)
		{
			exit(EXIT_SUCCESS);
		}

		pid_i = fork();
		if (pid_i != 0)
			wait(NULL);
		else
		/*	execute(parsedAv
		*/	if (execve(parsedAv[0], parsedAv, envp) == -1)
			{
				_perror(-1);
				break;
			}
	}
	printf("\n");

	return (0);
}
