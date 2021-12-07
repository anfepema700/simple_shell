#include "shell.h"

/**
 * splitstring - splits a string and makes it an array of pointers to words
 * @str: the string to be split
 * @delim: the delimiter
 * Return: array of pointers to words
 */

char **splitstring(char *str, const char *delim)
{
int i, j;
char **array;
char *token;
char *copy;

copy = malloc(_strlen(str) + 1);
if (copy == NULL)
{
perror(_getenv("_"));
return (NULL);
}
i = 0;
while (str[i])
{
copy[i] = str[i];
i++;
}
copy[i] = '\0';
token = strtok(copy, delim);
array = malloc((sizeof(char *) * 2));
array[0] = _strdup(token);
i = 1;
j = 3;
while (token)
{
token = strtok(NULL, delim);
array = _realloc(array, (sizeof(char *) * (j - 1)), (sizeof(char *) * j));
array[i] = _strdup(token);
i++;
j++;
}
free(copy);
return (array);
}

/**
 * _realloc - Reallocates memory block
 * @ptr: previous pointer
 * @old_size: old size of previous pointer
 * @new_size: new size for our pointer
 * Return: New resized Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new;
char *old;
unsigned int i;

if (ptr == NULL)
return (malloc(new_size));

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new = malloc(new_size);
old = ptr;
if (new == NULL)
return (NULL);

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new[i] = old[i];

free(ptr);

for (i = old_size; i < new_size; i++)
new[i] = '\0';
}

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
new[i] = old[i];

free(ptr);
}
return (new);
}

/**
 * freearv - frees the array of pointers arv
 *@arv: array of pointers
 */

void freearv(char **arv)
{
int i;

for (i = 0; arv[i]; i++)
free(arv[i]);

free(arv);
}