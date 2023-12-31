#include "main.h"
/**
 * print_pointer - Handle the %p conversion specifier
<<<<<<< HEAD
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
=======
 * @valist: arguments
>>>>>>> beca8f9f3e26c31e2065519186ed7574670ffabd
 *     if a flag is passed to _printf
 * Return: Number of characters printed
 */
int print_pointer(va_list valist)
{
	uintptr_t pointer = va_arg(valist, uintptr_t);
	int count = 0;

	count += _putchar('0') + _putchar('x');
	count += print_hl(pointer);

	return (count);
}
