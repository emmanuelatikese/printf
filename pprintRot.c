#include "main.h"

/**
 * printRot - this is print rot 13
 * @val: val list param
 * Return: return int
 */

int printRot(va_list val)
{
	char x[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char y[] = {"mnopqrstuvwxyzabcdefghijklmABCDEFGHIJKLM"};
	char *s = va_arg(val, char *);
	int ct = 0, i, j;
	int k = 0;

	if (s == NULL)
		s = "(Null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; x[j] && !k; j++)
		{
			if (s[i] == x[j])
			{
				putchar_(y[j]);
				ct = ct + 1;
				k = 1;
			}
		}
		if (!k)
		{
			putchar_(s[i]);
			ct++;
		}
	}
	return (ct);
}
