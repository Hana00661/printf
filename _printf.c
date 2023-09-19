#include "main.h"

/**
 * f_handle - handles the format of flags
 *
 * @args: argument that  listed
 * @format: pointer to a character string
 * @count: number of bytes
 *
 * Return: void
 */

static void f_handle(va_list args, const char format, int *count)
{
	if (format == 'c')
		_putchar(va_arg(args, int), count);
	else if (format == 's')
		print_str(va_arg(args, char *), count);
	else if (format == '%')
		_putchar('%', count);
	else if (format == 'd' || format == 'i')
		print(va_arg(args, int), count);
	else if (format == 'u')
		print_un(va_arg(args, unsigned int), count);
	else if (format == 'x' || format == 'X' || format == 'o')
		oct_hex(va_arg(args, unsigned int), format, count);
	else if (format == 'b')
		print_bin(va_arg(args, unsigned int), count);
}

/**
 * _printf - a function that print an infinite number of arguments
 *
 * @format: pointer to a character string
 *
 * Return: number of byets excluding the null byte
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*format == '\0')
			return (-1);
			++format;
			f_handle(args, *format, &count);
		}
		else
			_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
