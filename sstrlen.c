#include "main.h"

/**
 * strelenc - prints len of const char
 *
 * @c: const char type
 * Return: return int
 */

int strelenc(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * strelen - prints len of char
 *
 * @c: char type
 * Return: returns int
 */

int strelen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
