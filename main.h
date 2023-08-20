#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int printf_pointer(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_string(va_list val);
int print_unsigned(unsigned int n);
int printf_unsigned(va_list args);
#endif
