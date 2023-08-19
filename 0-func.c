#include "main.h"
/**
 * _printf - prints output according to format
 * @format: the format
 *
 * Return:count of charcters printed
 */
int _printf(const char *format, ...)
{
	va_list nm;
	int i, j;
	char s;
	char *t;

	va_start(nm, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == 'c')
		{
			s = va_arg(nm, int);
			putchar(s);
			j++;
		}
		else if (format[i] == 's')
		{
			t = va_arg(nm, char *);
			while (*t)
			{
				putchar(*t);
				t++;
			}
			j++;
		}
		else if (format[i] == '%')
		{
			putchar( 37);
			j++;
		}
	}
	putchar('\n');
	va_end(nm);
	return (j);
}
