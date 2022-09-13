#include "main.h"

/**
 * print_sign - Entry point
 * Description: print sign of n
 * @n: refer to funciton's parameter
 */
int print_sign(int n)
{
	int result;
	while (n)
	{
		if (n > 0)
		{
			_putchar('+');
			result = 1;
			break;
		}
		else if (n < 0)
		{
			_putchar('-');
			result = -1;
			break;
		}
		else
		{
			_putchar(n);
			result = 0;
			_putchar(0);
		}
	}
	return result;
}
