#include "shell.h"

/**
 * exitt - exits the shell with or without a return of status n
 * @arv: array of words of the entered line
 */
void exitt(char **arv)
{
int i, n;

if (arv[1])
{
n = _atoi(arv[1]);
if (n <= -1)
n = 2;

freearv(arv);
exit(n);
}

for (i = 0; arv[i]; i++)
free(arv[i]);

free(arv);
exit(0);
}

/**
 * _atoi - converts a string into an integer
 *@s: pointer to a string
 *Return: the integer
 */
int _atoi(char *s)
{
int i, entero, signo = 1;

i = 0;
entero = 0;
while (!((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
{
if (s[i] == '-')
{
signo = signo * (-1);
}
i++;
}

while ((s[i] >= '0') && (s[i] <= '9'))
{
entero = (entero * 10) + (signo * (s[i] - '0'));
i++;
}
return (entero);
}

/**
 * env - prints the current environment
 * @arv: array of arguments
 */
void env(char **arv __attribute__ ((unused)))
{

int i;

for (i = 0; environ[i]; i++)
{
_puts(environ[i]);
_puts("\n");
}

}
