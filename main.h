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

int _printChar(va_list);
int _printStr(va_list);
int _printPercent();

int _printf(const char *format, ...);
int _putchar(char c);
#endif
