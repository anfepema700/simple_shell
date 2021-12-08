#include "simple_shell.h"

/**
 * bi_exit - exit
 * Return: always zero to change state
 */

int bi_exit(void)
{
return (0);
}

/**
 * bi_env - gets environ vars
 * Return: always zero
 */

int bi_env(void)
{
int i = 0;
int str_len;

while (environ[i] != NULL)
{
str_len = _strlen(environ[i]);
write(1, environ[i], str_len);
write(1, "\n", 2);
i++;
}
return (1);
}

/**
 * main - Entry point
 * Return: EXIT_SUCCESS
 */

int main(void)
{
int state;
char *input = NULL;
char **args;
char *builtinlist[] = {"env", "exit"};
size_t bufferinput = 0;

do {
if (isatty(0))
{
write(1, JR_PROMPT, 2);
}
input = read_input(&input, &bufferinput);
args = break_input(input);
state = run_command(args, builtinlist);
free(args);
} while (state);
free(input);
return (EXIT_SUCCESS);
}
