#include "main.h"
/**
 * printunsigned - prints unsignedint
 *
 * @val: va list param
 *
 * Return: returns int
 */

int printunsigned(va_list val)
{
	unsigned int n = va_arg(val, unsigned int);
	unsigned int num, dg, ep = 1, lt = n % 10;
	int i = 1;

	n = n / 10;
	num = n;
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ep = ep * 10;
			num = num / 10;
		}
		num = n;
		while (ep > 0)
		{
			dg = num / ep;
			putchar_(dg + '0');
			num = num - (dg * ep);
			ep = ep / 10;
			i++;
		}
	}
	putchar_(lt + '0');
	return (i);
}
