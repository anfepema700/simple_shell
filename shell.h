#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
char *_strdup(char *str);
char *concat_all(char *name, char *sep, char *value);
void terminal(void);
void _end_of_file(int len, char *buff);
void _control_c(int sig_num);
char **splitstring(char *str, const char *delim);
void execute(char **argv);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

extern char **environ;

/**
*struct list_path - linked list with PATH
*@dir: directory into PATH
*@p: pointer to next node to create linked list
**/

typedef struct list_path
{
char *dir;
struct list_path *p;
} list_path;

char *_getenv(const char *name);
list_path *add_node_end(list_path **head, char *str);
list_path *linkpath(char *path);
char *_which(char *filename, list_path *head);

/**
 *struct mybuild - pointer function validate buildin command
 *@name: buildin check
 *@func: execute the buildin command
 **/

typedef struct mybuild
{
	char *name;
		void (*func)(char **);
} mybuild;

void(*checkbuild(char **arv))(char **arv);
int _atoi(char *s);
void exitt(char **arv);
void env(char **arv);
void _setenv(char **arv);
void _unsetenv(char **arv);
void freearv(char **arv);
void free_list(list_path *head);

#endif
