#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[t] - '0');
	}

	return (dec_val);
}
