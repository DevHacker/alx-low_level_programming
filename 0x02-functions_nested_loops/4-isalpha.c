/**
 * _isalpha - Entry point
 * Description: Checks if c is a letter
 * @c: refers to the function's parameter
 * Return: 1 if letter or 0
 */
int _isalpha(int c)
{
	int result;
	
	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
