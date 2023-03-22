#include "main.h"
/**
 * _isalpha - this function checks if an input is an alphabet
 * @c: the argument to be entered
 * Return: 0 if not a character
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
