#include "main.h"

/**
 * _abs - Entry point
 * Description: return the absolute value
 * Return - Always 0 (Success)
 */
int _abs(int n)
{
	int result;
	if (n > 0)
	{
		result = n;
		_putchar('\n');
	}
	else if (n < 0)
	{
		result = -n;
		_putchar('\n');
	}
	else
	{
		result = 0;
		_putchar('\n');
	}
	return result;
}
