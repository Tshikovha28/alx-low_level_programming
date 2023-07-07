#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @b: number to print in binary
 */
void print_binary(unsigned long int b)
{
	int v, count = 0;
	unsigned long int current;

	for (v = 63; v >= 0; v--)
	{
		current = b >> v;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
