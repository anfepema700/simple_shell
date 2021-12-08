#include "simple_shell.h"

/**
*str_comp - Compare strings
*@str_a: char pointer
*@str_b: char pointer
*Return: int
**/

int str_comp(char *str_a, char *str_b)
{
	while ((*str_a != '\0' && *str_b != '\0') && *str_a == *str_b)
	{
	str_a++;
	str_b++;
	}
	if (*str_a == *str_b)
	{
	return (0);
	}
	else
	{
	return (*str_a - *str_b);
	}
}
