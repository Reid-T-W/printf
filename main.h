#ifndef PRINTF_FUNC
#define PRINTF_FUNC

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct print_func
{
	char print_ft;
	int (* p_func)(va_list l);
} pr_f;

int _printf(const char *format, ...);
void select_command(const char *format, va_list list, int *i, int *count);
int _putchar(char c);
int _printc(va_list l);
int _prints(va_list l);
int _print_num(va_list l);
#endif
