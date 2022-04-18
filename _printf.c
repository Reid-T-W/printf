#include "main.h"
#include <stdarg.h>
/**
 * _printf - function used for printing any value
 * @format: Value to print along with specifiers
 * Return: Returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list list;
	int *pointer_i = &i;
	int *pointer_count = &count;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				select_command(format, list, pointer_i, pointer_count);
			}
			else
			{
				count += _putchar(format[i]);
				++i;
			}
		}
	}
	return (count);
}
/**
 * select_command - prints the required arguments and returns i
 * @format: values to be printed
 * @i: int
 * @count: int
 * @list: list of arguments
 * Return: returns i
 */
void select_command(const char *format, va_list list, int *i, int *count)
{
	switch (format[*i + 1])
	{
		case '%':
			*count += _putchar('%');
			*i += 2;
			break;
		case 'c':
			*count += _printc(list);
			_printc(list);
			*i += 2;
			break;
		case 's':
			*count += _prints(list);
			*i += 2;
			break;
		case 'd':
		case 'i':
			*count += _print_num(list);
			_print_num(list);
			*i += 2;
			break;
		default:
			*count += _putchar('%');
			++*i;
			break;
	}
}
