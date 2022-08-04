#include "main.h"

/**
 * main - a simple shell
 *
 * Return: Always 0
 */
int main(int argc, char **argv, char **envp)
{
	int pid_i;
	exec_l *parsedAv;

	if (argc > 1)
	{
		if (execve(argv[1], argv, NULL) == -1)
			_perror(-1);
		return (0);
	}
	while (1)
	{
		if (isatty(fileno(stdin)))
			prompt_cmd();
		parsedAv = read_cmd();
		if (parsedAv == NULL)
			continue;
/* Found bug on line 26 */
		if (strcmp(parsedAv->argv[0], "exit") == 0)
		{
			printf("kdfdkj\n");
			exit(EXIT_SUCCESS);
		}
printf("kdfdkj\n");

		pid_i = fork();
		if (pid_i != 0)
			wait(NULL);
		else
		/*	execute(parsedAv
		*/	if (execve(parsedAv->argv[0], parsedAv->argv, envp) == -1)
			{
				_perror(-1);
				break;
			}
	}
	printf("\n");

	return (0);
}
