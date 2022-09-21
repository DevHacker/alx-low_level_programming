#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

// Function to implement `strcat()` function in C
char *_strcat(char *dest, char *src)
{
    int i, j;
 
    // move to the end of the destination string
    for (i = 0; dest[i] != '\0'; i++);
 
    // `i` now point to terminating null character in the destination
 
    // Appends characters of the source to the destination string
    for (j = 0; src[j] != '\0'; j++) {
        destn[i + j] = src[j];
    }
 
    // null terminate destination string
    dest[i + j] = '\0';
 
    // the destination is returned by standard `strcat()`
    return dest;
}
