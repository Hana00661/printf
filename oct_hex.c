#include "main.h"

/**
 * oct_hex - a function that prints numbers in octal and hexdicimal formats
 *
 * @n: number to be print
 * @format: format specifier.
 * @count: Pointer of bytes
 *
 * Return: void
*/

void oct_hex(unsigned int n, char format, int *count)
{
	unsigned int length;
	char *base;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	else if (format == 'o')
		base = "01234567";

	length = (format == 'o') ? 8 : 16;

	if (n < length)
	{
		_putchar(base[n % lenght], count);
	}
	else
	{
		oct_hex(n / length, format, count);
		oct_hex(n % length, format, count);
	}
}
