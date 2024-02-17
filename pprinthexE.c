#include "main.h"

/**
 * printhexE - prints oct
 *
 * @val: valist param
 *
 * Return: returns int
 */

int printhexE(va_list val)
{
	int *arr;
	int i, count = 0;
	unsigned int nm = va_arg(val, unsigned int);
	unsigned int tm = nm;

	while (nm / 16 != 0)
	{
		nm = nm / 16;
		count++;
	}
	count = count + 1;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (0);
	for (i = 0; i < count; i++)
	{
		arr[i] = tm % 16;
		tm = tm / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		putchar_(arr[i] + '0');
	}
	free(arr);
	return (count);
}
