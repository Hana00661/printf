#include "main.h"

/**
 * _putchar - a function that prints a char
 *
 * @c: pointer of string
 * @count: number of bytes
 *
 * Return: void.
 */
void _putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

/**
 * print_str - a function that prints a string
 *
 * @str: string to print
 * @count: pointer to char
 *
 * Return: Nothing
 */

void print_str(char *str, int *count)
{
	if (str == NULL)
	{
		char *s = "(null)";

		while (*s)
		{
			_putchar(*s, count);
			s++;
		}
	}
	else
	{
		while (*str)
		{
			_putchar(*str, count);
			str++;
		}
	}
}
