#include "main.h"
/**
* print_alphabet - function
* Return: void
*/
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
