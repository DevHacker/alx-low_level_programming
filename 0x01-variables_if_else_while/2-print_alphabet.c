#include<stdio.h>
/**
 * Main - Entry point
 *Description: Print the alphabet in lowercase followed by \m character
 *Return: Always 0 (success)
 */
int main(void)
{
	char car;
	/*this for loop to print alphabet*/
	for (car = 'a'; car <= 'z'; car++)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);

}
