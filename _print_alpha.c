#include "main.h"
#include <stdarg.h>
/**
 * _prints - prints a string
 * @s: string to be printed
 * Return: Returns int
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
int _printc(va_list l)
{
	_putchar(va_arg(l,int));
	return (1);
}
