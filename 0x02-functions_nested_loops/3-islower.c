#include "main.h"

/**
 * _islower - Entry point
 * Description: Check if chacracter is in lowercase
 * @c: refers to the function's parameter 
 * Retrun: return 1 if success and 0 if not
 */
int _islower(int c)
{
	int result;
	
	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
