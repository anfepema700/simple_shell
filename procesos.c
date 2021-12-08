#include "simple_shell.h"

/**
*rocket - launcher system
*@args: char
*Return: int
**/

int rocket(char **args)
{
	pid_t pid, w_pid;
	int state;
	char **env = environ;
	int here = 0;

	pid = fork();
	if (pid == 0)
	{
	if (execve(args[0], args, env) == -1)
	{
	perror("Error");
	}
	exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
	perror("Fork failed");
	}
	else
	{
	do {
	w_pid = waitpid(pid, &state, WUNTRACED);
	if (w_pid == 0)
	{
	here++;
	}
	} while (!WIFEXITED(state) && !WIFSIGNALED(state));
	}
	return (1);
}
