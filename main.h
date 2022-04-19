#ifndef PRINTF_FUNC
#define PRINTF_FUNC

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 *struct print_func - struct to select specific print function
 *@ft: format specifier
 *@p_func: pinter to function
 */
typedef struct print_func
{
	char ft;
	int (*p_func)(va_list l, flags_t *f);
} pr_f;

int (*get_print_func(char fc))(va_list l, flags_t *);
int get_flag(char s, flags_t *f);
int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);
void print_number(int n);
int  count_digit(int i);

int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);
#endif
