#include "main.h"

/**
 * print_octal - Print numbers in base 8 (octal)
 * @n: Number to print
 * Return: Number of characters printed
 */
int print_octal(unsigned int n)
{
	int index, i, count = 0;
	char octal[32];

	if (n == 0)
	{
		putchar('0');
		count++;
	}
	else
	{

		while (n > 0)
		{
			octal[index] = n % 8 + '0';
			n /= 8;
			index++;
		}

		for (i = index - 1; i >= 0; i--)
		{
			putchar(octal[i]);
			count++;
		}
	}

	return (count);
}
