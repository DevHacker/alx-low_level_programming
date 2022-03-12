#include<stdio.h>
/**
 * Main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
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
