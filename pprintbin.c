#include "main.h"
/**
 * printbin - prints binary
 *
 * @val: vardic parameter
 * Return: returns int
 */

int printbin(va_list val)
{
	int ct = 0, fg = 0, i = 0;
	int a = 1, b;
	unsigned int nm = va_arg(val, unsigned int), p;

	while (i < 32)
	{
		p = ((a << (32 - i)) & nm);
		if (p >> (31 - i))
			fg = 1;
		if (fg)
		{
			b = p >> (31 - i);
			putchar_(b + 48);
			ct++;
		}
		i++;
	}
	if (ct == 0)
	{
		ct++;
		putchar_('0')
	}
	return (ct);
}
