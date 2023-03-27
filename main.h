#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * operators - Represents a format specifier function
 */
typedef struct operators
{
	char spec;
	int (*func)(va_list);
} ops_t;

int _printChar(va_list list);
int _printStr(va_list list);
int _printPercent();

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
#endif
