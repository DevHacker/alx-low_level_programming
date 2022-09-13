#include "main.h"

/**
 * _abs - Entry point
 * Description: return the absolute value
 * @n: Refer to the function's parameter
 * Return: return the result
 */
int _abs(int n)
{
	int result;
	
	if (n > 0)
	{
		result = n;
	}
	else if (n < 0)
	{
		result = -n;
	}
	else
	{
		result = 0;
	}
	return (result);
}
