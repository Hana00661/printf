#include "main.h"

/**
 * print - function that print an integer
 *
 * @n: number of print.
 * @count: count of bytes.
 *
 * Return: Nothing.
 */

void print(int n, int *count)
{
	long nb = n;

	if (n < 0)
	{
		_putchar('-', count);
		nb *= -1;
	}
	if (nb < 10)
		_putchar(nb + 48, count);
	else
	{
		print(nb / 10, count);
		print(nb % 10, count);
	}
}

/**
 * print_un - function that  print unsigned decimal
 *
 * @n: number of  print
 * @count: count of bytes
 *
 * Return: nothing
 */

void print_un(unsigned int n, int *count)
{
	if (n < 10)
		_putchar(n + 48, count);
	else
	{
		print(n / 10, count);
		print(n % 10, count);
	}
}

/**
 * print_bin - function that  print a number binary
 *
 * @n: number of  print
 * @count: count of bytes
 *
 * Return: nothing
 */

void print_bin(unsigned int n, int *count)
{
	char binary[33];
	int i = 0, j;

	if (n == 0)
	{
		_putchar('0', count);
		return;
	}
	while (n > 0)
	{
		binary[i++] = (n % 2) + 48;
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(binary[j], count);
}
