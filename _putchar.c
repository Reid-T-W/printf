#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *_putchar - prints a char
 *@c: The char to be printed
 *Return: void
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
