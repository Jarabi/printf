#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - produces output according to a format
 * @format: format specifier character string
 *
 * Return: Number of characters printed (excluding nullbyte).
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int print_count = 0;
	va_list list;

	ops_t func_list[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'i', print_integer},
		{'d', print_decimal},
	};

	if (!*format)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			while (func_list[i].spec)
			{
				if (*format == func_list[i].spec)
					print_count += func_list[i].f(list);
				i++;
			}
			i = 0;
		}
		else
		{
			_putchar(format[i]);
			print_count++;
		}
		format++;
	}
	va_end(list);
	return (print_count);
}
