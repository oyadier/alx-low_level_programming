#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * welcome_message - print a text before the main function
 * Return: void
 */

void __attribute__((constructor)) welcome_message()
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
