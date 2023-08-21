#include "main.h"
/**
 * _printf - print to standard output
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, cnt, count = 0;

	va_list form;

	va_start(form, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_put(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_put(va_arg(form, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			cnt = putss(va_arg(form, char*));
			i++;
			count += (cnt - 1);
		}
		else if (format[i + 1] == '%')
		{
			_put('%');

		}
		count++;

	}
	return (count);
}
