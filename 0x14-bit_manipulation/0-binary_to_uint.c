#include "holberton.h"
/**
 * binary_to_uint - this a function that converts a binary numbers
 * to an unsigned int
 * @b: the pointer
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
   int index = 0;
   unsigned int acumulatorBits = 0;
    
   if (b == NULL)
        return (0);
    /**
     * this is only to check that there is some data in b
     */
    while (b[index]) /*significa que exist some in b*/
    {
       /**
     * we validate that b in your index is same to 1
     */
    if (b[index] == '1')
    {
     /**
      * we acumulate the bits
      */
     acumulatorBits = acumulatorBits << 1;
     acumulatorBits = acumulatorBits | 1;   
    }
    else if (b[index] == '0')
        acumulatorBits = acumulatorBits << 1;
    else
    {
        return (0);
    }
    index++;
    }
    return (acumulatorBits);
}