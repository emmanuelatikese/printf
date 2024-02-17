#include "main.h"

/**
 * printoct - prints oct
 *
 * @val: valist param
 *
 * Return: returns int
 */

int printoct(va_list val)
{
	int *arr;
	int i, count = 0;
	unsigned int tm;
	unsigned int nm = va_arg(val, unsigned int);

	tm = nm;
	while (nm / 8 != 0)
	{
		nm = nm / 8;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		arr[i] = tm % 8;
		tm = tm / 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		putchar_(arr[i] + '0');
	}
	free(arr);
	return (count);
}
