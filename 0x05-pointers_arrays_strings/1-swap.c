#include "main.h"
/**
* swap -  swap the values of pointer of integer
* variable
* @a: first pointer variable
* @b: second pointer variable
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
