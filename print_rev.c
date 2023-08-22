#include "main.h"
/**
 *print_rev - print string in reverse
 *@str: string pointer
 *Return: counter
 */
int print_rev(char *s)
{
	char *z = str;
	int i;
	int count1 = 0;
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count1++;
	}

	i = count1 - 1;
	while (i >= 0)
	{
		putchar(*(z + i));
		i--;
		count++;
	}

	return (count);
}
