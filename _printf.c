#include "main.h"

/**
 * _printf - printf function
 * @format: Format string
 * @...: Additional arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, c, num, count = 0;
	va_list valist;
	char *s;

	va_start(valist, format);

	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else if (format[i + 1])
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(valist, int);
				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				s = va_arg(valist, char *);
				if (!s)
					s = "(null)";
				count += _printstring(s);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				num = va_arg(valist, int);
				count += print_number(num);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				putchar('%');
				putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			putchar('%');
			return (-1);
		}
	}

	va_end(valist);
	return (count);
}
