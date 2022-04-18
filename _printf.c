#include "main.h"
#include <stdarg.h>
#include <stdio.h>
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
	int error = 0;
	int *pointer_error = &error;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				select_command(format, list, pointer_i, pointer_count, pointer_error);
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
void select_command(const char *format, va_list list, int *i, int *count,
		int *error)
{
	switch (format[*i + 1])
	{
		case '%':
			*count += _putchar('%');
			*i += 2;
			break;
		case 'c':
			*count += _putchar(va_arg(list, int));
			*i += 2;
			break;
		case 's':
			*count += _prints(va_arg(list, char *));
			*i += 2;
			break;
		case 'd':
		case 'i':
			_print_num(va_arg(list, int));
			*i += 2;
			break;
		default:
			*count = _putchar('%');
			*error = 1;
			++*i;
			break;
	}
}
/**
 *_putchar - prints a char
 *@c: The char to be printed
 *Return: void
 */
int _putchar(char c)
{
	putchar(c);
	return (1);
}

/**
 * _prints - prints a string
 * @s: string to be printed
 * Return: Returns int
 */
int _prints(char *s)
{       int c = 0;

	while (*s != '\0')
	{
		c += _putchar(*s);
		s++;
	}
	return (c);
}

/**
* _print_num - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/
void _print_num(int n)
{
	int copy, nth, size = 1, ones = n % 10;
	int c = 0;

	n /= 10;
	copy = n;
	if (ones < 0)
	{
		ones *= -1, copy *= -1, n *= -1;
		c += _putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
		{
			copy /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			c += _putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	c += _putchar('0' + ones);
}
