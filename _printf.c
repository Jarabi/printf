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
	int print_count = 0;
	va_list list;

	ops_t func_list[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'i', print_integer},
		{'d', print_decimal},
		{'b', print_binary}
	};

	if (format == NULL)
		return (-1);

	va_start(list, format);

	print_count = process(format, func_list, list);

	va_end(list);
	return (print_count);
}
