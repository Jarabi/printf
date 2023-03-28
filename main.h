#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
* struct operators - defines a structure for symbols and functions
* @spec: The operator
* @f: The function associated
*/
typedef struct operators
{
	char spec;
	int (*f)(va_list);
} ops_t;

int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int _printf(const char *format, ...);
int process(const char *format, ops_t func_list[], va_list list);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int len);
int print_binary(va_list list);
int print_integer(va_list list);
int print_decimal(va_list list);
int print_number(va_list list);
#endif
