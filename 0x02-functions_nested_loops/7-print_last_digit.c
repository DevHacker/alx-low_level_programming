#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: print the last digit of a number
 * @n: Refer to the function's parameter
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;
	
	last_digit = n % 10;
	return (last_digit);
}
