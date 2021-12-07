#include "shell.h"

/**
 *_control_c - validate if control + c is type
 *@sig_num: int for validate the signal of function
**/

void _control_c(int sig_num)
{
	if (sig_num == SIGINT)
	{
		_puts("\n#cisfun$");
	}
}

/**
 *_end_of_file - end of file in terminal execution
 *@len: return value of getline function
 *@buff: buffer
 **/

void _end_of_file(int len, char *buff)
{
	(void)buff;

	if (len == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			_puts("\n");
			free(buff);
		}
		exit(0);
	}
}

/**
 *_isatty - validate if terminal is run
**/

void _isatty(void)
{
	if (isatty(STDIN_FILENO))
		_puts("#cisfun$ ");
}
