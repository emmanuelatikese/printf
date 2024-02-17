#include "main.h"

/**
 * _printf - does same as print
 * @format: const char param pointer
 * Return: return int
 */

int _printf(const char *format, ...)
{
	st n[] = {
		{"%s", printstr}, {"%c", printchar},
		{"%%", printper}, {"%i", printint},
		{"%d", printdec}, {"%r", printrev},
		{"%R", printRot}, {"%b", printbin},
		{"%u", printunsigned}, {"%o", printoct},
		{"%x", printhex}, {"%X", printhexE},
		{"%S", printstrE}, {"%p", printptr}
	};
	va_list a;
	int i = 0, b, ln;

	va_start(a, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Start:
	while (format[i] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (n[b].id[0] == format[i] && n[b].id[1] == format[i + 1])
			{
				ln += n[b].func(a);
				i = i + 2;
				goto Start;
			}
			b--;
		}
		putchar_(format[i]);
		ln++;
		i++;
	}
	va_end(a);
	return (ln);
}
