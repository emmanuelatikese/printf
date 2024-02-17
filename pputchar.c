#include "main.h"
/**
 * putchar_ - print char
 * @c: character
 * Return: return int
 */

int putchar_(char c)
{
	char x;

	x = c;
	write(1, &x, 1);
	return (1);
}
