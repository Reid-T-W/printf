#include "main.h"
#include <stdarg.h>
/**
 * _prints - prints a string
 * @l: va_list type pointing to string
 * Return: Returns length of string
 */
int _prints(va_list l)
{       int c = 0;
	char *s = va_arg(l, char *);

	while (*s != '\0')
	{
		c += _putchar(*s);
		s++;
	}
	return (c);
}

/**
 *_printc - print single char
 *@l: va_list type pointing to char
 *Return: 1
 */
int _printc(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
