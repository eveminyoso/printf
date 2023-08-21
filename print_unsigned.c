#include "main.h"

/**
 * print_unsig - Print unsigned numbers
 * @n: Number to print
 * Return: Number of characters printed
 */
int print_unsig(unsigned int n)
{
	int i, count = 0;
	unsigned int num_copy = n;
	char buffer[];

	if (n == 0)
	{
		putchar('0');
		count = 1;
	}
	else
	{
		while (num_copy != 0)
		{
			num_copy = num_copy / 10;
			count++;
		}

		buffer[count]; /* Buffer to store the digits in reverse order*/

		for (i = count - 1; i >= 0; i--)
		{
			buffer[i] = n % 10 + '0';
			n = n / 10;
		}

		for (i = 0; i < count; i++)
		{
			putchar(buffer[i]);
		}
	}

	return (count);
}
