#include "main.h"
#include <stdio.h>

/**
 * convert_binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_str: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is an invalid char or if binary_str is NULL.
 */
unsigned int convert_binary_to_uint(const char *binary_str)
{
	if (binary_str == NULL)
		return 0;

	unsigned int result = 0;

	while (*binary_str != '\0')
	{
		if (*binary_str == '0' || *binary_str == '1')
		{
			result = result * 2 + (*binary_str - '0');
		}
		else
		{
			/* Invalid character encountered */
			return 0;
		}
		binary_str++;
	}

	return result;
}

int main(void)
{
	const char *binary_data = "110110";
	unsigned int converted_value = convert_binary_to_uint(binary_data);

	printf("Binary: %s\n", binary_data);
	printf("Converted Value: %u\n", converted_value);

	return 0;
}
