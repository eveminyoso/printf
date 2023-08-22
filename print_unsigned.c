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
	char buffer[12]; /* Max length of unsigned int in decimal + 1*/

	if (n == 0)
	{
		putchar('0');
		count = 1;
	}
	else
	{
		i = 0;
		while (num_copy != 0)
		{
			buffer[i] = num_copy % 10 + '0';
			num_copy /= 10;
			i++;
			count++;
		}
		for (i = i - 1; i >= 0; i--)
		{
			putchar(buffer[i]);
		}
	}
	return (count);
}
