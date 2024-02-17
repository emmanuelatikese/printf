#include "main.h"

/**
 * printstrE - print %s
 *
 * @val: val param
 * Return: return int
 */

int printstrE(va_list val)
{
	int i, ln = 0, v;
	char *s;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(Null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			putchar_('\\');
			putchar_('x');
			ln = ln + 2;
			v = s[i];
			if (v < 16)
			{
				putchar_('0');
				ln++;
			}
			ln = ln + printhex_E(v);
		}
		else
		{
			putchar_(s[i]);
			ln++;
		}
	}
	return (ln);
}
