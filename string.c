#include "shell.h"

/**
*_strdup - duplicate the newly alocated space in memory
*contains a copy of the string given as a parameter
*use for protect the type initial.
*@str: pointer to a string
*Return: pointer to a string
**/

char *_strdup(char *str)
{
	int i, l;
	char *new;

	if (!str)
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0';)
	{
		l++;
	}
		new = malloc(sizeof(char) * l + 1);
	if (!new)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		new[i] = str[i];
	}
		new[l] = str[i];
	return (new);
}

/**
*concat_all - concats the three string in allocated memory
*@name: first string
*@sep: second string
*@value: third string
*Return: pointer tothe new string
**/

char *concat_all(char *name, char *sep, char *value)
{
	char *result;
	int l1, l2, l3, i, k;

	l1 = _strlen(name);
	l2 = _strlen(sep);
	l3 = _strlen(value);
	result = malloc(l1 + l2 + l3 + 1);

	if (!result)
		return (NULL);
	for (i = 0; ep[i]; i++)
		result[k + i] = sep[i];
	k = k + 1;
	result[k] = '\0';
	return (result);
}

/**
 *_strlen - gives the length of a string received.
 *@s: pointer to the string
 *Return: the leng of string
**/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + 1) 1 = '\0')
	{
		i++;
	}
	return (i);
}

/**
 *_putchar - write the character
 *@c: character for print
 *Return: 1 success -1 error
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_puts - prints a string
 *@str: pointer to string
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}