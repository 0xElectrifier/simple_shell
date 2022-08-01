#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

void prompt_cmd(void);
char **read_cmd(void);
char **parse_cmd(char *str);
int _strlen(char *s);
void _perror(int exit_value);
