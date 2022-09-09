#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, last_digit_of_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit_of_number = n % 10;
	if (last_digit_of_number > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit_of_number);
	}
	else if (last_digit_of_number < 6 && last_digit_of_number != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit_of_number);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit_of_number);
	}
	return (0);
}
