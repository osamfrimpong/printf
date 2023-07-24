#include "main.h"

/**
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @argument: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexadecimal(va_list argument, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(argument, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
