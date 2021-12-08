#include "simple_shell.h"

/**
*run_command - Run the given command
*@args: pointer
*@builtinlist: char built in list
*Return: war
**/

int run_command(char **args, char **builtinlist)
{

	int i, lar;
	int (*builtinfunc[])() = {&bi_env, &bi_exit};

	lar = sizeof(builtinfunc)/sizeof(builtinfunc[0]);
	if (args[0] == NULL)
	{
	return (1);
	}
	for (i = 0; i < lar; i++)
	{
	if (str_comp(args[0], builtinlist[i]) == 0)
	{
	return ((*builtinfunc[i])(args));
	}	
	}
	return (rocket(args));
}
