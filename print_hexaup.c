#include "main.h"

/**
 * print_hexaup - Print number in hexadecimal with uppercase letters
 * @n: Unsigned int
 * Return: Number of characters printed
 */
int print_hexaup(unsigned int n)
{
	int i, index = 0, count = 0;
	char hex_digits[] = "0123456789ABCDEF", hex[32];

	if (n == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			hex[index] = hex_digits[n % 16];
			n /= 16;
			index++;
		}

		for (i = index - 1; i >= 0; i--)
		{
			putchar(hex[i]);
			count++;
		}
	}

	return (count);
}