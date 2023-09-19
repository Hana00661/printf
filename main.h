#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void _putchar(char c, int *count);
void print_str(char *str, int *count);
void print(int n, int *count);
void print_un(unsigned int n, int *count);
void print_bin(unsigned int n, int *count);
void oct_hex(unsigned int n, char format, int *count);

#endif
