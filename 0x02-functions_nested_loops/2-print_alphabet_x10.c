#include "main.h"
/**
* prints alphabet_X10 - Prints the alphabet 10 times.
*
* Return: Always 0 (Success)
*/
void print_alphabet_X10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
