#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: pointer to the resulting string
 */

// Function to implement `strcat()` function in C
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len] = src[i];
	}
	return (dest);
}
