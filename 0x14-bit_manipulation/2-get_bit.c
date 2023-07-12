#include "main.h"

/**
 * get_bit - entry point
 * @n: number variable
 * @index: index variable
 *
 * Description: a function that returns the value of a bit at a given index
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
