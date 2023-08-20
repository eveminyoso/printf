#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);
	while (*format)
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 's':
				len += printf_string(va_arg(args, char *));
				break;
			case 'c':
				len += printf_char(va_arg(args, int));
				break;
			case '%':
				len += printf_37();
				break;
			case 'i':
			case 'd':
				len += printf_int(va_arg(args, int));
				break;
			case 'r':
				len += printf_srev(va_arg(args, char *));
				break;
			default:
				_putchar('%');
				_putchar(*format);
				len += 2;
				break;
			}
		}
		else
			_putchar(*format);
			len++;
		format++;
	va_end(args);
	return (len);
}
