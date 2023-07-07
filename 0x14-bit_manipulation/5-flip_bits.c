#include "main.h"
#include <stdio.h>
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @a: first number
 * @b: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int t, count = 0;
	unsigned long int current;
	unsigned long int exclusive = a ^ b;

	for (t = 63; t >= 0; t--)
	{
		current = exclusive >> t;
		if (current & 1)
			count++;
	}

	return (count);
}
