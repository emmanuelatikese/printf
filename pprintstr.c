#include "main.h"

/**
 * printstr - prints strings
 *
 * @val: vardic list
 * Return: returns int
 */

int printstr(va_list val)
{
	char *s =  va_arg(val, char*);
	int len = strelen(s);
	int i = 0;

	s = s == NULL ? "(Null)" : s;
	for (i = 0; i < len; i++)
	{
		putchar_(s[i]);
	}
	return (i);
}
