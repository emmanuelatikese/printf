#include "main.h"

/**
 * printdec - prints int
 *
 * @val: vardic parameter a
 * Return: return int
 */

int printdec(va_list val)
{
	int n = va_arg(val, int);
	int i = 1;
	int num, dg, ep = 1, lt = n % 10;

	n = n / 10;
	num = n;
	if (lt < 0)
	{
		putchar_('-');
		num = -num;
		n = -n;
		lt = -lt;
		i++;
	}
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
/**
 * printint - prints int
 *
 * @val: vardic parameter a
 * Return: return int
 */

int printint(va_list val)
{
	int n = va_arg(val, int);
	int i = 1;
	int num, dg, ep = 1, lt = n % 10;

	n = n / 10;
	num = n;
	if (lt < 0)
	{
		putchar_('-');
		num = -num;
		n = -n;
		lt = -lt;
		i++;
	}
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
