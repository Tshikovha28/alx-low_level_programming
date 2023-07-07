#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @r: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *r)
{
	int t;
	unsigned int dec_val = 0;

	if (!r)
		return (0);

	for (t = 0; r[t]; t++)
	{
		if (r[t] < '0' || r[t] > '1')
			return (0);
		dec_val = 2 * dec_val + (r[t] - '0');
	}

	return (dec_val);
}
