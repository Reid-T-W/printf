#include "main.h"

/**
* _print_num - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/
int _print_num(va_list l)
{
	int n = va_arg(l, int);
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
	return (c);
}
