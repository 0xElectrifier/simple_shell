#include "main.h"

/**
 * modFirst_cmd - function that modifies the passed input (e.g ls) to (/bin/ls)
 * @head: pointer to the node containing the string to be modified
 *
 * Return: nothing
 */
void modFirst_cmd(arg_l *head)
{
	char *str, *temp = "/bin/";
	int len, i = 0, j = 0;

	len = _strlen(head->str) + 6;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return;

	while (i < 5)
	{
		str[i] = temp[i];
		i++;
	}

	while (head->str[j] != '\0')
		str[i++] = head->str[j++];
	str[i] = '\0';
	free(head->str);
	head->str = str;
}
