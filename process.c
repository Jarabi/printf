#include "main.h"

/**
 * process - prints formatted output
 * @format: string with format characters
 * @func_list: function list
 * @list: argument list
 *
 * Return: Total count of characters/digits printed
 */
int process(const char *format, ops_t func_list[], va_list list)
{
	int i = 0, print_count = 0;

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
	return (print_count);
}
