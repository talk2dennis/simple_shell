#include "shell.h"
/**
 * exec - 
 *@cmd
 *Return: nothing
 */
void exec(char **cmd)
{

	char *arg = NULL;
	arg = malloc(sizeof(char * 2));

	arg[0] = {cmd[0], NULL};
	execve(cmd[0], arg, NULL);
	perror("imput execve");

}