#include "main.h"
/**
 * flip_bits - sets the value of a bit to 0 at a given index.
 *
 * @n: first number to be comparated
 * @m: second number to be comparated
 * Return: 1 if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int counter = 0;
    n = n ^ m;

    while (n > 0)
    {
        if (n & 1)
            counter++;
        n = n >> 1;
    }
    return (counter);
}