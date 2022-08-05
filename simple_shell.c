#include "main.h"

/**
 * main - a simple shell
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int pid_i;
	exec_l *parsedAv;
	char *envp[2] = {"PATH=bin", NULL};
	

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
/* Found bug on line 26 
		printf("simple, %s\n", parsedAv->argv[0]);
*/		if (strcmp(parsedAv->argv[0], "/bin/exit") == 0)
		{
			break;
		}

		if (exec_cmd(parsedAv, envp) == -1)
			break;
	}
	printf("\n");

	return (0);
}
