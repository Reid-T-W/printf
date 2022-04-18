#ifndef PRINTF_FUNC
#define PRINTF_FUNC
#include <stdarg.h>

int _printf(const char *format, ...);
void select_command(const char *format, va_list list, int *i, int *count);
int _putchar(char c);
int _prints(char *s);
int _printint(int i);
int _print_num(int n);
#endif
