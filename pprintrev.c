#include "main.h"

/**
 * printrev - print reverse
 * @val: va list param
 * Return: return int
 */

int printrev(va_list val)
{
	int i, j = 0;
	char *s = va_arg(val, char*);

	if (s == NULL)
		s = "(Null)";
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
		putchar_(s[i]);
	return (j);
}
