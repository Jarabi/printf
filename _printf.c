#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: format specifier character string
 *
 * Return: Number of characters printed (excluding nullbyte).
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list list;

	va_start(list, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(list, int));
					break;
				case 's':
					_puts(va_arg(list, char*));
					break;
				case '%':
					_putchar('%');
					break;
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(list);
	return (0);
}
