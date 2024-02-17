#include "main.h"

/**
 * printptr - works on ptr
 * @val: va_list a
 * Return: int
 */

int printptr(va_list val)
{
	long int a;
	int i, b;
	void *ptr;
	char *s = "(Null)";

	ptr = va_arg(val, void *);
	if (ptr == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putchar_(s[i]);
		}
		return (i);
	}
	a = (unsigned long int)ptr;
	putchar_('0');
	putchar_('x');
	b = printhex_E(a);
	return (b + 2);
}
