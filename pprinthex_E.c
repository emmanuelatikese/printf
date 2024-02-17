#include "main.h"

/**
 * printhex_E - prints oct
 *
 * @nm: valist param
 *
 * Return: returns int
 */

int printhex_E(unsigned long int nm)
{
	long int *arr;
	long int i, count = 0;
	unsigned long int tm;

	tm = nm;
	while (nm / 16 != 0)
	{
		nm = nm / 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(long int) * count);

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
			arr[i] = arr[i] + 39;
		putchar_(arr[i] + '0');
	}
	free(arr);
	return (count);
}
