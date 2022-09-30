#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int i1 = 0, i2;
	char alphabet[S2] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 
