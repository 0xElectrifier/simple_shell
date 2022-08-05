#include "main.h"

/**
 * exec_cmd - function that handles the execution of the commands passed
 * @cmd_arr: struct to an exec_l list that contains all the arguments needed
 * for execution
 *
 * Return: nothing
 */
int exec_cmd(exec_l *cmd_arr, char **envp)
{
	if (cmd_arr == NULL)
		return (-1);
	if (access(cmd_arr->argv[0], F_OK) == -1)
		_perror(-1);
	ppid = getpid();
	cpid = fork();
	if (cpid != 0)
	{
		wait(NULL);
		return (exec_cmd(cmd_arr->next, envp));
	}
	else
		if (execve(cmd_arr->argv[0], cmd_arr->argv, envp) == -1)
		{
			if ((cmd_arr->op == L_AND) || (cmd_arr->op == L_COL))
				kill(
			_perror(-1);
			return (-1);
		}
	return (0);

}
