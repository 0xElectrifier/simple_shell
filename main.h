#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

#define L_OR "||"
#define L_AND "&&"
#define L_COL ";"

typedef struct exec_l
{
	char **argv;
	struct exec_l *next;
} exec_l;
typedef struct arg_l
{
	char *str;
	struct arg_l *next;
} arg_l;




void prompt_cmd(void);
char **read_cmd(void);
char **parse_cmd(char *str);
int _strlen(char *s);
void _perror(int exit_value);
int is_operator(char *str);
arg_l *add_node_end(arg_l **head, char *str);
arg_l *tokenize_arg(char *str, char *delim);
arg_l *construct_argL(arg_l **head, char *str);
int count_cmd(arg_l *str);
int is_operator(char *str);
exec_l *construct_execL(exec_l **head, char **arr, arg_l parsedAv);
