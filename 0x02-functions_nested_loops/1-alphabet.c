#include"main.h"
/**
 * print_alphabet - Entr point
 * Description: Print alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char lowerCase_letter = 'a';

	while (lowerCase_letter <= 'z')
	{
		_putchar(lowerCase_letter);
		lowerCase_letter++;
	}
	_putchar('\n');
	return;
}
