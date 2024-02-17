#include "main.h"
/**
 * printchar - prints char
 *
 * @val: vard list
 * Return: return int
 */

int printchar(va_list val)
{
	char s = va_arg(val, int);

	putchar_(s);
	return (1);
}
