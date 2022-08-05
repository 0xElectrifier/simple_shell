#include "main.h"

int main(void)
{
/*	int s;
	exec_l *temp = NULL;

	if ((s = is_operator("||")))
	printf("Correct\n");
	else
		printf("Not true\n");


	if (temp && (temp->next != NULL))
		printf("Hello\n");
	printf("False\n");
*/
	char *s1 = strdup("Hello");
	arg_l *poi, **temp;

	poi = malloc(sizeof(arg_l));

	poi->str = s1;
	poi->next = NULL;
	temp = &poi;

	printf("Address of s1: %p\n", s1);
	printf("Address of s1 through struct pointer: %p\n", (poi->str));
	printf("Address of pointer: %p\n", (*temp)->str);

	free((*temp)->str);
	printf("dkfj: %s\n", s1);
	(*temp)->str = strdup("World");
	printf("Address of s1: %s\n", s1);
	return (0);
}
